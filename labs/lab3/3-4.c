#include <stdio.h>
#include <string.h>

void reverse (char s[]){
	int c, i, j;

	for (i=0, j=strlen(s)-1; i<j; i++, j--){ //i from the front, j from th e last
		//swap s[i] and s[j] 
		c=s[i];
		s[i]=s[j];
		s[j]=c;
	}	
	return;	
}

int main(void){
	char s[256] ;
	int ch, i=0;
	printf("input string : \n");
	while ((ch=getchar()) !=EOF) {
		s[i++] = ch;	
		if (ch == '\n'){
			//printf("%s\n", s);
			reverse(s);
			printf("reversed array : %s\n", s);	//reversed array s	
			s[i]='\0';	//input null
			i=0;		//initialize
			int k=0;
			while(s[k]) s[k++]='\0';	//array initialize	
		}


	}
		
	return 0;
}



