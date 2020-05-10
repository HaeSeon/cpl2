#include <stdio.h>
 

//array swap

void swap(double* aa, double* bb) {
    double temp = *aa;
    *aa = *bb;
    *bb = temp;
}

 

//Qicksort in float

void QuickSort_3(double array[], int p, int r) {

    if (p < r) {

        int q = Partition_3(array, p, r);   //divide

        QuickSort_3(array, p, q - 1);       //sort left

        QuickSort_3(array, q + 1, r);       //sort right

    }

    else {

        return;
    }
}


int Partition_3(double array[], int p, int r) {

    int mid = p + (r - p) / 2;
    int i;
    int q = p;
    //Pivot is median from first, medium, last index
    if (array[p] > array[mid]) {
        swap(&array[p], &array[mid]);
    }
    if (array[mid] > array[r]) {
        swap(&array[mid], &array[r]);
    }
    if (array[p] > array[mid]) {
        swap(&array[p], &array[mid]);
    }
    swap(&array[mid], &array[r]);
    float pivot = array[r];
    for (i = p; i < r; i++) {
        if (array[i] <= pivot) {
            swap(&array[i], &array[q]);
            q++;
        }
    }
    swap(&array[r], &array[q]);
    return q;
}

int main(void) {
    double f[] = { 1.1, 9.9, 2.2, 8.8, 3.3, 7.7, 4.4, 6.6, 5.5, 0.0 };
    QuickSort_3(f, 0, 9);    //quicksort in float
    for (int a = 0; a < 10; a++) {
        printf("%0.1f ", f[a]);
    }
	printf("\n");
    return 0;
}
