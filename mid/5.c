#include <stdio.h>


int main(void){

	int a;	//value wil be factorization
	int i;
	printf("Input Integer : \n");
	scanf("%d", &a);	//input by user
	for (i=2; i<=a; i++){
		if ( a% i == 0) {	//checking divisor
			printf("%d", i);
			a=a/i;	//denying overlapping
			i=1;
			if(a!=1) printf("*");	//print *
		}
	}
	printf("\n");
	return 0;
} 
