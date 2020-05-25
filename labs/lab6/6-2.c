#include <stdio.h>

int main(void) {
	//define struct node
	struct  node{
		int len;
		char* str;
	};

	struct node a = { 10, "test" };

	//구조체 a를 가리키는 포인터 선언
	struct node* p = &a;

	printf("a.len is %d\n", a.len);	//점 연산자로 구조체 a 의 len멤버에 접근
	printf("p->len is %d\n", p->len);	//화살표 연산자(포인터)로 구조체 a의 len 멤버에 접근
	printf("++p->len is %d\n", ++p->len);	//++(p->len) 이므로 len 에 접근한 다음 +1을 한다. 
	printf("a.str is %s\n", a.str);	//점 연산자로 구조체 a 의 str멤버에 접근
	printf("p->str is %s\n", p->str);	//화살표 연산자(포인터)로 구조체 a의 str 멤버에 접근
	printf("*p->str is %c\n", *p->str);	//*(p->str) 이므로 str에 접근한 다음 맨앞 문자 출력
	printf("*p->str++ is %c\n", *p->str++);	//*(p->str)++ 이므로 str에 접근하여 맨 앞 문자 t 출력 후 다음문자로 이동
	printf("a.str is %s\n", a.str);	//전 문장에서 t 다음 문자인 e로 이동했으므로 est 출력
 
	return 0;
}
