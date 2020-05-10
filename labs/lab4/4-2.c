#include <stdio.h>
#include <stdlib.h>

int main(void){

	for (int i=0; i<4; ++i){
		printf("%d ", rand()%10); //random number of 0~9
	}

	printf("\n");

	return 0;
}

