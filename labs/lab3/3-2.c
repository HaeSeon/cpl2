#include <stdio.h>
#include <ctype.h>
#include <stdlib.h> 

int main (void){

	char str[50], a[20], b[20], op; //str:full formula, a:first number, b:second number, op:operator
	int ch, i=0;
	int j; 
	double result;

	while ((ch=getchar()) != EOF ){  //until end of file
		str[i++] = ch;   //get character and put it array str[]
		if (ch == '\n'){
			for (i=0,j=0;isdigit(str[i]) || str[i] =='.'; ++i, ++j)
				a[j] = str[i];  //get integer or decimal
			a[j] ='\0';   //input null
			for (; str[i] == ' '; i++);
			op = str[i++];   //get operator
			for (; str[i] == ' '; i++);
			for (j=0; isdigit(str[i]) || str[i] =='.'; ++i, ++j)
				b[j] = str[i];    //get integer or decimal (second number)
			b[j] = '\0';    //input null

			//printf("%s %c %s\n", a, op, b);
			i=0;  //initialize i
		}

		if ( ch =='\n'){
			double num1 = atof(a);  //string to float
			double num2 = atof(b);	
	
			//operation
			if ( op == '+') result = num1+num2;
			else if (op == '-') result = num1-num2;
			else if (op == '*') result = num1*num2;
			else if (op == '/') result = num1/num2;
			else if (op == '%'){  //% is possible when get integer
				if((num1-(int)num1) == 0&&(num2-(int)num2)==0&&num1>0&&num2>0) result = (int)num1%(int)num2;
				else {
					printf("Input integer for mode\n");
					exit(0);
				}
			}
		}
		int k=0;
		int check =1;
		while(a[k]||b[k]) {  //if input decimal point, then print type of double
			if (a[k]=='.'||b[k]=='.'){  
				printf("%lf\n", result);
				check =0;
				break;
			}
			k++;	
		}
		
		//if input integer, then print type of int
		if(ch=='\n'&&check==1) printf("%d\n", (int)result);
		k=0;
		while(a[k]||b[k]){
			//inifialize
			a[k]='\0';
			b[k]='\0';
			k++;
		}
	}
	return 0;
}
