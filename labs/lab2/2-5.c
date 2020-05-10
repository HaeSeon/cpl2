#include <stdio.h>
#include <limits.h>

int main(void){
	//signed int and unsigned int
	printf("int min is %d, int max is %d\n", INT_MIN, INT_MAX);
	printf("uint min is %u, uint max is %u\n", 0, UINT_MAX);

	//signed short and unsigned short
	printf("short min is %d,short max is %d\n", SHRT_MIN, SHRT_MAX);
	printf("ushort min is %u, ushort max is %u\n", 0, USHRT_MAX);
	
	//signed char and unsigned char	
	printf("char min is %d, char max is %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("uchar min is %d, uchar max is %d\n", 0, UCHAR_MAX);

	//signed long and unsigned long
	printf("long min is %ld, long max is %ld\n", LONG_MIN, LONG_MAX);
	printf("ulong min is %d, ulong max is %ld\n", 0, ULONG_MAX);

	return 0;
} 
