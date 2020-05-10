#include <stdio.h>

int main(void){

	int i, j, d;  //i and j is integer, d is difference

	printf("Input two integer: ");
	scanf("%d %d", &i, &j);

	d = (i>j) ? i-j : j-i;    //if i>j then i-j else j-i

	printf("Difference of %d and %d is %d\n", i, j, d);

	return 0;
}
