#include <stdio.h>

int min(int i, int j, int k){

	int min;
	if (i < j){ 	//if i is small then j
		if ( i < k)	//if i is smaller than j and k
			min = i;
		else
			min = k;
	}
	else {
		if (j<k)	//if j is smaller than i and k
			min = j;
		else 
			min = k;
	}
	return min;


}


int max(int i, int j, int k){
	int max;
	if ( i>j ) {
		if (i>k)	//if i is bigger than j and k
			max=i;
		else
			max=k;
	}
	else {  
		if (j>k)	//if j is bigger than i and k
			max=j;
		else
			max=k;
	}
	return max;
}


int main(void){
	//number to compare
	int i=10;
	int j=20;
	int k=-30;

	printf("Min value is %d\n", min(i ,j ,k));
	printf("Max value is %d\n", max(i, j, k));

	return 0;

}
