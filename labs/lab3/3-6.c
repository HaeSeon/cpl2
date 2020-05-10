#include <stdio.h>

int main (void) {

	int i;
	int a, b;  //two integer
	printf("Input two integers: \n");
	scanf("%d %d", &a, &b);
	printf("Common divisor of %d and %d is : ",a, b);

	for ( i=1; i <=a||i<=b ; i++)
		if ( a%i==0&&b%i==0) printf(" %d", i);	//common divisors of a and b
	printf("\n");
	return 0;
}
