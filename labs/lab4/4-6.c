#include <stdio.h>

int i = 10;    //global variable

void f(void) {
	int i = 1;   //auto int variable
	printf("i in f() is %d\n", i++);
}

void s(void) {
	static int i = 100;   //static variable
	printf("i in s() is %d\n", i++);

}

int main(void) {
	for (int j = 0; j < 3; ++j) {
		printf("i in main() is %d\n", i++);
		f();  //run function f
		s();  //run function s
	}

	return 0;

}

