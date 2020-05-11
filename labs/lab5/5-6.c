#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int i;
	for (i=argc-1; i>=1; i--)	//역순으로 출력
		printf("%s%s", argv[i], (i<argc) ? " " : "");   //빈칸이거나 아니거나 구분하여 echo 구현
	printf("\n");
	return 0;
}
