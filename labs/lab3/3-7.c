#include <stdio.h>

int main(void){

	int i=0;    //i:comparison number
	int n;      //n:2~200 
	printf("Prime number of 1~200 is :\n");
	for ( n=2; n<=200; ++n){
		i=2;
		while(i<n){
			if(n%i==0)  //divisor check
				break;
			else
				i++;	
		}
		if (i==n)
			printf("%d\t", n);  //print prime number
	}
 	printf("\n");

	return 0;
}
