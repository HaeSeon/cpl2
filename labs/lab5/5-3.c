#include <stdio.h>
#include <string.h>

int mystrlen(char* s) {

	int n;
	//s가 가리키는 값이 null이 아닐때까지 n을 count
	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}

int main(void) {

	char* s[] = { "This is lab5", 
			  "Easy C Programming", 
			  "Have fun" };

	//s[0] : This is lab5
	//s[1] : Easy C Programming
	//s[2] : Have fun
 
	printf("with strlen\n");
	int n = (int)(sizeof(s) / sizeof(char*));
	for (int i = 0; i < n; i++)
		printf("%s %d\n", *(s + i), (int)strlen(s[i]));
		//*(s+0) == s[0] , strlen(s[0]) : s[0]의 길이 
	putchar('\n');

	printf("with mystrlen\n");
	for (int i = 0; i < n; i++)
		printf("%s %d\n", *(s + i), (int)mystrlen(s[i]));
	return 0;
}
