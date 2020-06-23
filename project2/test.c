#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(void){
	char a[]="aa.mp3";	
	char b[]="mplayer ";
	strcat(b,a);
	printf ("%s\n", b);
	//system("mplayer alan.mp3");
	system(b);
	exit(0);
	}
