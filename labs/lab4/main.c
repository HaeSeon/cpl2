#include <stdio.h>
#include <stdlib.h>  //for atof()

#define MAXOP 100	//max size of operand or operator
#define NUMBER '0'

int getop(char []);
void push(double);
double pop(void);


//reverse Polish calculator
int main(){

	int type;
	double op2;	//because of operation order
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {   //get operand or operator until end of file

		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop()+pop());
			break;
		case '*' :
			push(pop()*pop());
			break;
		case '-' :
			op2 = pop();   //because of operation order (-)
			push(pop()-op2);
			break;
		case '/':
			op2 = pop();    //because of operation order (/)
			if (op2 != 0.0)		//prevent zero division
				push(pop()/op2);
			else
				printf("error: zero divisor\n");
			break;
		case '\n':
			printf("\t%.8g\n", pop());    //print operation result
			break;
		default:
			printf("error: unknown command %s\n", s);
			break;
		}
	}
	return 0;
}



