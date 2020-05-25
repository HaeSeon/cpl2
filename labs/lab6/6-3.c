#include <stdio.h>
#include <ctype.h>
#include <string.h>
 
#define MAXWORD 100
 
struct key
{
	char* word;
	int count;
} keytab[] = {
	{"auto",0}, {"break",0}, {"case", 0}, {"char",0},
{"const",0},{"continue",0}, {"default", 0}, {"double", 0},{"else", 0},
{"enum",0},{"extern",0},{"float",0},{"for",0},
{"goto",0},{"if",0},{"int",0},{"long",0},
{"register",0},{"return",0},{"short",0},{"signed",0},
{"sizeof",0},{"static",0},{"struct",0},{"switch",0},
{"typedef",0},{"union",0},{"unsigned",0},{"void",0},
{"volatile",0},{"while",0}
 
};
 
#define NKEYS (sizeof keytab / sizeof keytab[0])
 
int getword(char*, int);
int binsearch(char*, struct key*, int);
int main(void) {
        int n;
        char word[MAXWORD];
//파일 끝날때 까지 반복
        while (getword(word, MAXWORD) != EOF){
                //printf("%d\n", n);
                if (isalpha(word[0])){	//첫 글자 알파벳이면
                        //int k = binsearch(word, keytab, NKEYS);
                        //printf("%s, %d\n", word, k);
                        if ((n = binsearch(word, keytab, NKEYS)) >= 0){//keytab에서 찾은경우
                                keytab[n].count++;	//각각 단어 카운트
                                //printf("%d\n", n);
                        }
                }
        }

	//카운트한 키워드와 갯수 출력
        for (n = 0; n < NKEYS; n++){
                //printf("%4d\n", keytab[n].count);
                if (keytab[n].count > 0){
                        printf("%4d %s\n", keytab[n].count, keytab[n].word);
                }
        }
        return 0;
}
 

//바이너리서치
int binsearch(char* word, struct key tab[], int n) {
	int cond;
	int low, high, mid;
 
	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low + high) / 2;
		if ((cond = strcmp(word, tab[mid].word)) < 0)
			high = mid - 1;
		else if (cond > 0)
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
 

//get word
int getword(char* word, int lim) {
	int c, getch(void);
	void ungetch(int);
	char* w = word;
 
	while (isspace(c = getch()))	
		;
	if (c != EOF)
		*w++ = c;
	if (!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for ( ; --lim>0; w++)
		if (!isalnum(*w = getch())) {
			ungetch(*w);
			break;
		}
	*w = '\0';
	return word[0];
}



