#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


#define MAXWORD 100
 
struct tnode
{
	char* word;
	int count;
	struct tnode* left;
	struct tnode* right;
};
 
struct tnode* addtree(struct tnode*, char*);
void treeprint(struct tnode*);
int getword(char*, int);
int main(void) {
	struct tnode* root;
	char word[MAXWORD];
 
	root = NULL;
 
	//문자를 받아 첫 글자가 알파벳이면 addtree() 실행
	while (getword(word, MAXWORD) != EOF)
		if (isalpha(word[0]))
			root = addtree(root, word);
	treeprint(root);
 
	return 0;
}
 
//문자 받기
int getword(char* word, int lim) {
	int c, getch(void);
	void ungetch(int);
 
	char* w = word;
 
	while (isspace(c = getch()));
	if (c != EOF)
		*w++ = c;
	if (!isalpha(c)) {
		*w = '\0';
		return c;
	}
	for (; --lim > 0; w++)
		if (!isalnum(*w = getch())) {
			ungetch(*w);
			break;
		}
	*w = '\0';
	return word[0];
}
 
struct tnode* talloc(void);
char* mystrdup(char* s);
 
 
//add a node with w, at or below p
struct tnode* addtree(struct tnode* p, char* w) {
	int cond;
 
	if (p == NULL) {	//새로운 단어 들어옴
		p = talloc();	//노드 생성
		p->word = mystrdup(w);
		p->count = 1;
		p->left = p->right = NULL;
	}
	else if ((cond = strcmp(w, p->word)) == 0)
		p->count++;
	else if (cond < 0)	//왼쪽 서브트리보다 작을 때
		p->left = addtree(p->left, w);
	else	//오른쪽 서브트리보다 클 때
	{
		p->right = addtree(p->right, w);
	}
	return p;
}
 
 
void treeprint(struct tnode* p) {
	if (p != NULL) {
		treeprint(p->left);	//재귀호출
		printf("%4d %s\n", p->count, p->word);
		treeprint(p->right);	//재귀호출
	}
}
 
struct tnode *talloc(void)
{
	return (struct tnode*) malloc(sizeof(struct tnode));
};
 
char* mystrdup(char* s) {
	char* p;
	p = (char*)malloc(strlen(s) + 1);	//문자열 들어갈 공간 할당
	if (p != NULL)
		strcpy(p, s);	//문자열 카피
	return p;
}
