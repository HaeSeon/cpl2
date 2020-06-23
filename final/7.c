#include <stdio.h>
#include <time.h>
 
static char daytab[2][13] = {
	//첫번째 칸을 비운 이유는 1월과 i가 1인것을 맞추기 위함
	{0,31,28,31,30,31,30,31,31,30,31,30,31},	//평년
	{0,31,29,31,30,31,30,31,31,30,31,30,31}		//윤년
};
 
typedef struct _Date {
	int year;
	int month;
	int day;
} Date;
 
 
long totalday(Date day);
 
int main()
 
{
	Date first_date;	
	Date second_date;
	int dates;
	printf("기준일을 입력하세요. \n");
	printf("yyyy mm dd : ");
	scanf("%d %d %d", &first_date.year, &first_date.month, &first_date.day);
	printf("계산일을 입력하세요. \n");
	printf("yyyy mm dd : ");		
	scanf("%d %d %d", &second_date.year, &second_date.month, &second_date.day);
	//차이 계산
	dates = totalday(second_date) - totalday(first_date)+1;
	printf("%d년 %d월 %d일\n", first_date.year, first_date.month, first_date.day);
	printf("%d년 %d월 %d일\n", second_date.year, second_date.month, second_date.day);
	printf("%d일째 입니다. \n", dates);
	return 0;
}
 
 
long totalday(Date date)
{
	int i;
	long total = 0L;
 
	//전체 일 계산
	total = (date.year - 1) * 365L + (date.year - 1) / 4 - (date.year - 1) / 100 + (date.year - 1) / 400;
 
	for (i = 0; i < date.month ; i++) {
		//윤년일 때
		if (!(date.year % 4) && date.year % 100 || !(date.year % 400)) {
			total += daytab[1][i];
		}
 
		//평년일 때 
		else{
			total += daytab[0][i];
		}
		
	}
	//전체 일 계산
	total += date.day;
	return total;
}
 
