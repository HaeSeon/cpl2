#include <stdio.h>
#include <string.h>

void expand (char s1[], char s2[]){

	int i;	
	//printf("%d\n", s1[0]);
	for (i=0; s1[0]+i<=s1[2]; i++){   //s1[0]:97(a), s1[2]:103(g)
		s2[i] = s1[0] + i;   //s2[]={a,b,c,d,e,f,g}
	
	}
	return;




}	


int main (void){

	char str1[50], str2[50]; 
	char str3[50], str4[50]={'\0'};

	strcpy(str1,"a-g");	//copy string
	//printf("%s\n", str1);
	expand(str1,str2);
	printf("%s %s\n", str1, str2);


	strcpy(str3,"0-9");	//copy string
	expand(str3, str4);
	printf("%s %s\n",str3, str4);
	return 0;
}
