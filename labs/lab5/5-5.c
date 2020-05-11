#include <stdio.h>

static char daytab[2][13] = {

	//첫번째 칸을 비운 이유는 1월과 i가 1인것을 맞추기 위함
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
 
int day_of_year(int year, int month, int day) {
	int i, leap;
	//leap : 윤년이면 1, 윤년이 아니면 0
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];		//더해가며 일수를 구함
	return day;
}

void month_day(int year, int yearday, int* pmonth, int* pday) {
	int i, leap;
	//leap : 윤년이면 1, 윤년이 아니면 0
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];		//빼나가면서 달과 일수를 저장
	*pmonth = i;
	*pday = yearday;
}

int main(void) {
	int day1 = day_of_year(2020, 4, 27);	//2020년 4월 27일은 몇번쨰 날 인지
	printf("%d\n", day1);
 
	int day2 = day_of_year(2014, 4, 16);
	printf("%d\n", day2);
 
	int month1;
	month_day(2020, 200, &month1, &day1);		//2020 년 200번째 일을 몇월 몇일 인지
	printf("%d, %d\n", month1, day1);
 
	int month2;
	month_day(2000, 200, &month2, &day2);		//2000 년 200번째 일을 몇월 몇일 인지
	printf("%d, %d\n", month2, day2);
	return 0;
}
