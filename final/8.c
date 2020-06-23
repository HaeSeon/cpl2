#include <stdio.h>
#include <stdlib.h>

//받아올 구조체 정의
typedef struct member {
	char name[10];
	int score1;
	char score2;
	char score3;
	int sum;
}Member;
 
int Compare(const void* v1, const void* v2);
 
int main()
{
	Member m[6];
	int i;
 
	//파일 오픈
	FILE* f;
	f = fopen("data.txt", "r");
	if (f == NULL) {
		fprintf(stderr, "파일을 읽을 수 없습니다.");
		return -1;                //파일을 쓸 수 없을 때(-1의 반환은 비정상적 종료 의미)
	}
 
	for(i=0; i<5; i++)
		fscanf(f, "%s %d %d %d\n", &m[i].name, &m[i].score1, &m[i].score2, &m[i].score3);	//값 받아오기
 
	fclose(f);
	printf("data.txt의 내용\n");
	//출력
	for (i = 0; i < 5; i++) {
		m[i].sum = Sum(m[i]);
		printf("%5s %5.d %5.d %5.d\n", m[i].name, m[i].score1, m[i].score2, m[i].score3);
		
	}
 
	qsort(m, 5, sizeof(Member), Compare);	//퀵소트
	printf("\n합 내림차순 정렬 후\n");
	//정렬 결과 출력
	printf("이름   점수1  점수2  점수3 합  평균\n");
	for (i = 0; i < 5; i++) {
		printf("%5s %5d %5d %5d %5d %5.2f\n", m[i].name, m[i].score1, m[i].score2, m[i].score3, m[i].sum, (double)m[i].sum / 3);
	}
}
 
 
//점수 합을 구하는 함수
int Sum(Member student){
	int sum = student.score1 + student.score2 + student.score3;
	return sum;
}
 
 
//구조체 퀵소트를 위한 비교 함수
int Compare(const void* v1, const void* v2){
	const Member* m1 = (const Member*)v1;
	const Member* m2 = (const Member*)v2;
	return m2->sum - m1->sum;
}
