#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	srand(time(NULL));    //for a different number each time
	for (int i=0; i<4; ++i){
		printf("%d ", rand()%10); //random number of 0~9
	}

	printf("\n");

	return 0;
}

