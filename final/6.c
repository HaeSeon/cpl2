#include <stdio.h>
 
 
int main(void) {
    int integer;
    int arr[100]={0};   //이진수 담을 배열
    //입력받기
    printf("10진수를 입력하세요. : ");
    scanf("%d", &integer);
    if(integer==0)
	printf("2진수 : 0\n");
else{
    int i=0;
    //2진수 계산 할 때, 2로 나누어갈 때, 나머지를 나열하면 2진수가 되므로 나머지를 배열에 담아준다.
    while (integer >0) {
        arr[i] = integer % 2;
        integer = integer / 2;
        i++;
    }
    
 
    //2진수 값이 배열에 거꾸로 들어가있기 떄문에 역순으로 출력해준다.
    printf("2진수 : "); 
    for (int j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);

    printf("\n");
}

    return 0;
}
