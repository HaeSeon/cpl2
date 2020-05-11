#include <stdio.h>

 

 

int main(int argc, char* argv[]) {

    int c;

    while (--argc>0 && (*++argv)[0]=='-')
        while(c=*++argv[0])
            switch (c) {
            case 'r':
                for (int i = argc - 1; i >= 1; i--)    //역순으로 출력
                    printf("%s%s", argv[i], (i < argc) ? " " : "");   //빈칸이거나 아니거나 구분하여 echo 구현
                printf("\n");
                return 0;
                break;
            case'n':
                while (--argc > 0)    //arg count를 변경하며 문제 해결
                    printf("%s%s", *++argv, (argc > 1) ? " " : "");   //빈칸이거나 아니거나 구분하여 echo 구현
                printf("\n");
                return 0;
                break;
            }
}
