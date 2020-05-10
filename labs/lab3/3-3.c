#include <stdio.h>

void shellsort (int v[], int n){
	int gap, i, j, temp;
	
	for (gap = n/2; gap>0; gap /=2)    //define gap
		for (i= gap; i < n; i++)
			for ( j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap){
				//swap v[j] and v[j+gap]
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap]= temp;
			}


}

int main(void){
	int s[]={12, 73, 4, 51, 22, 71, 2, 68, 100, 35};
	int i;
	int m = sizeof(s)/sizeof(int);  //length of array s

	for (i=0; i<m; i++)
		printf("%4d",s[i]);  //print array original array s
	putchar('\n');

	shellsort(s, m);    //sort
	for (i=0; i<m; i++)
		printf("%4d", s[i]);  //print sorted array s
	putchar('\n');

	return 0;
}

