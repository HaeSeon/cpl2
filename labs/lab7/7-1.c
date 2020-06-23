#include <stdio.h>
#include <stdarg.h>

int vsum(int n, ...){

	int result = 0;
	va_list arg_list;	//가변인수 위치
	va_start(arg_list, n);	//첫번째 인수 n

	for (int i=0; i<n; i++){
		result +=va_arg(arg_list, int);	//더해줌
	}

	va_end(arg_list);
	return result;
}

int main(void){
	printf("1+2=%d\n", vsum(2,1,2));

	printf("1+2+3=%d\n", vsum(3,1,2,3));
	printf("1+2+3+4=%d\n", vsum(4,1,2,3,4));
}
