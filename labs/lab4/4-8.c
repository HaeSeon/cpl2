#include <stdio.h>
#include<string.h>
 
//swap variable

void swap(char** s, char** t) {
    char* temp;
    temp = *s;
    *s = *t;
    *t = temp;
}

// sort string array by alphbet sequence

void sort(char** s) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // in ASCII code, if the next variable is greater than prev one, call swap function.
            if (strcmp(&s[i][0], &s[j][0]) < 0) {
                // printf("%s is bigger than %s \n",s[i],s[j]);
                swap(&s[i], &s[j]);
            }

        }

    }
    for (int i = 0; i < 10; i++) {
        printf("%s\n", s[i]);
    }
}


int main(void) {
    char* s[] = { "kim", "lee","park","choi","jung","kang","cho","yoon","chang","yim" };
    sort(s);    //run sort function
    return 0;
}
