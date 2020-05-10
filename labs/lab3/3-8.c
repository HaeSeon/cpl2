#include <stdio.h>

int main(void){

	int i;
	long f=1;   //because of range of 20!
	
	for (i=1; i<=20; i++) 
		f*=i;	//factorial
	printf("%d ! = %ld\n", --i, f);

	return 0;
}
