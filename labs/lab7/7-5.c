#include <stdio.h>
#include <ctype.h>

int main(void){

	char str[100];
	char *p;
	int ucount, lcount;	//lower, upper 셀 변수
	ucount = lcount =0;

	printf("Enter your string: ");
	fgets(str, sizeof(str), stdin);	//문자열얻기

	p=str;
	
	while(*p !='\n'){	//대소문자 카운트
		if(isupper(*p))
			ucount++;
		else if(islower(*p))
			lcount++;
		p++;
	}

	printf("Upper %d, Lower %d.\n", ucount, lcount);

	return 0;
}

