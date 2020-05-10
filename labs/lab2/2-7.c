#include <stdio.h>
#include <ctype.h>

int htoi(char s[]){

	int n=0, i=0;

	while (s[i] != '\0'){    //Untul s[i] is not null
		if (islower(s[i])){     //if s[i] is lower case, change lower case to upper case.
			s[i]=toupper(s[i]);
		}


		if (s[i]>= '0' && s[i]<='9'){	//When s[i] is 0~9, minus '0'.
			//printf("%d\n", s[i]-'0');
			s[i]-='0';
		}
		else if (s[i]>= 'A' && s[i] <= 'F'){	//When s[i] is A~F, convert to matchinig number.
			//printf("%d\n", s[i]-'A'+10);
			s[i]+=10-'A';		
		}
		
		n=16*n+s[i]; 	//Calculate hexa value n.

		++i;
	}


	return n;
}

int main(void){

	char h[]="12Af";

	printf("%s\n", h);
	printf("%x\n", htoi(h));
	printf("%d\n", htoi(h));
	return 0;


}
