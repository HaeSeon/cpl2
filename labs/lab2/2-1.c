//Calsius to Fahrenheit program
//201611097 LeeHaeSeon
#include <stdio.h>


int main(void){
	int cel;  //celsius
	double fahr;  //fahrenheit
	printf("Celsius Fahrenheit\n");

	for(cel=-20; cel<=40; cel+=3){  //step 3
		fahr=(double)cel * 9 / 5+32;    //cel=5*(fahr-32)/9
		printf("%4d %8.1f\n",cel,fahr);	

	}
	return 0;

}
