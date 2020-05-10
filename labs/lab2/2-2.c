#include<stdio.h>

int main(void){
	printf("Input some characters, then press Ctrl+D.");
	char ch;   //characters

	while((ch=getchar()) !=EOF){   //get characters, until the end of the file
		if (ch==' ' || ch == '\t' ||ch =='\n')
			putchar('\n');   //for newline
		else
			putchar(ch);   //print word on the screen
	}
	return 0;
}
