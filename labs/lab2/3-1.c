#include <stdio.h>

int main(void){
	int i, j,d;   //d : differnce, i and j is integer
	printf("Input two integers: ");
	scanf("%d %d", &i, &j);   //input number
	d = (i>j)? i-j: j-i;  //if i>j then i-j, else j-i
	printf("Difference of %d and %d is %d\n", i, j, d);
	return 0;
}
