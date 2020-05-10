#include <stdio.h>

int main(void){

	int i;
	for (i=65; i<91; i++){	//A:65, Z:90
		printf("%2c%c", i,i+32 );	//A+32=a
		if (i%6==4)	//for newline
			printf("\n");	
	}
	printf("\n");
	return 0;
}
