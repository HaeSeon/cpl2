#include <stdio.h>
#include <ctype.h>


void numChar (char s[]){
	int a[40]={0};	//alphabet count array
	int i=0;
	int j;
	int others=0;	//others count
	while(s[i]){
		others++;
		j=65;	//A:65
		while(  j<91){	//Z:90
			if (s[i]==j){	//if the char is each alphabet, then count number.
				a[j-65]++;
				others--;
				break;
			}
			j++;
			
		}
		i++;
	}	
	i=0;	//initiallize

	while(i<36){
		if(a[i]>0){	//print alphabet count
			printf("%c/%c count: %d\n", i+65, i+97, a[i]);
		}
		i++;
		
	}
	if(others!=0)	//print others
		printf("others: %d\n", others);	



}

int main(void){
	char s[256]={'\0'};
	int ch=0;
	int i=0;
	printf("Input string : \n");

	while((ch=getchar()) !=EOF){	//get char until end of the file
		s[i++]=toupper(ch); 	//all char change to the upper case

	}
	printf("\n");
	numChar(s);

}
