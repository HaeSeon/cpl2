#include <stdio.h>

int main(void){

	int i;
	for (i=33; i<126; ++i){
		printf("%3d %3X %3c  ", i, i, i);	
		if (i%6==2)	//new line
			printf("\n");	
	}
	printf("\n");

 	return 0;
}
