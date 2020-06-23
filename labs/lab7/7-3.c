#include <stdio.h>
 
int main(int argc, char* argv[]) {
    FILE* fp;   //파일포인터 선언
    void filecopy(FILE*, FILE*);
    if (argc == 1)
        filecopy(stdin, stdout);
    else
        while (--argc > 0) {
 
            //에러처리
            if ((fp = fopen(*++argv, "r")) == NULL) {
                printf("cat : can't open %s\n", *argv);
                return 1;
            }
            else {
 
                //파일 카피
                filecopy(fp, stdout);
                fclose(fp);
            }
        }
    return 0;
}
 
 
//파일 복사
void filecopy(FILE* ifp, FILE* ofp) {
    int c;
    while ((c = getc(ifp)) != EOF) {
        putc(c, ofp);
    }
}
