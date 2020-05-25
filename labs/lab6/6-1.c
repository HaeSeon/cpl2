#include <stdio.h>	
#include <math.h>	//우분투 math.h 컴파일시 -lm 명령어 추가
#include <stdlib.h>
 
int main(void) {

	//define struct point
	struct point {
		int x;
		int y;
	};

	struct point pt1 = { 10,20 };
	struct point pt2 = { 30,40 };

	//calc distance pt1 and pt2
	double distance = sqrt((double)pow(abs(pt1.x - pt2.x),2) + (double)pow(abs(pt1.y - pt2.y),2));

	//calc rect area
	int area = (abs(pt1.x - pt2.x) )*( abs(pt1.y - pt2.y));
	printf("distance : %lf, area : %d\n", distance, area);
	return 0;

}
