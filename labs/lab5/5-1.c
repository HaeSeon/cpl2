#include <stdio.h>

int main(void) {
	//define array a
	int a[] = { 1,2,3,4,5 };
	int* p = a;		//int형 포인터 변수 p에 배열 a의 시작 주소를 넣어줌
	int i;
	
	//for문과 배열식 표현으로 a 출력
	for (i = 0; i <= sizeof(a)/sizeof(int)-1; i++)
		printf("%d ", a[i]);

	printf("\n");
	
	//while문과 포인터식 표현으로 a 출력
	while (p<=a+sizeof(a)/sizeof(int)-1)
 {
		printf("%d ", *p++);
	}
	printf("\n");
	return 0;
}
