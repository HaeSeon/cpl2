#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//Insertion Sort for dictionary sort
int insertionSort(char *array, int length){
	int i,j,key;
	i=0;
	for (j=1; j<length; j++){
		key = array[j];
		i=j-1;
		while(i>=0 && array[i] > key){
			array[i+1] = array[i];
			i=i-1;
		}
		array[i+1] = key;
	}	
}




int main(void){

	char s[256]="bach mozart beethoven brahms chopin handel";
	//scanf("%s", s);
	
	
	char *arr[20]={NULL,};
	int i=0;
	char *ptr = strtok(s, " ");
	while (ptr != NULL){
		arr[i] = ptr;
		i++;
		ptr = strtok(NULL, " ");
	}

	insertionSort(*arr, 20);	//sort
	for(int i=0; i<20; i++){
		if(arr[i] != NULL)
			printf("%s\n", arr[i]);
	}

	

	return 0;
}
