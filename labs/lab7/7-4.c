#include <stdio.h>
#include <string.h>

 
int main()
{	

	//입력을 두개 받아서 두개의 길이를 출력하고 문자열 두개를 비교하여 뭐가더 빠른지 확인하고, 복사하여 합치는 프로그램	


    char str[256];
    char str2[256];
    printf("type string here: ");
    fgets(str);	//문자열 얻기
    printf("type second string here: ");
    fgets(str2);
    
    printf("each string length: 1.%d 2. %d\n", strlen(str), strlen(str2));
    
    printf("which is first? :");
    if(strcmp(str, str2)<0){	//빠른거 찾기
        printf("first!\n");
    }else{
        printf("second!\n");    
    }
    
    printf("copy! \n");
    strcpy(str, str2);	//복사
    
    printf("and merge!: ");
    strcat(str, str2);
    printf("%s\n", str);
 
    return 0;
}
