#define MAXVAL 100	//maximum depth of val stack

int sp = 0;
double val[MAXVAL];	//value stack

//push 
void push(double f){
	if(sp<MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can not push %g\n", f);
}

//pop
double pop(void){
	if(sp>0)
		return val[--sp];
	else{
		printf("error: stack empty\n");
		return 0.0;
	}
}
