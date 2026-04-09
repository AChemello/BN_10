#include <stdio.h>

char* minha_strcat(char* s1, char* s2);

char* minha_strcat(char* s1, char* s2){
    char* pt2 = s2;
    char* pt1 = s1;

    while(*pt1 != '\0'){
        pt1++;
    }

    while(*pt2 != '\0' ){
        *pt1 = *pt2;
        pt1++;
        pt2++;
    }
    return s1;
    // strcpy(pt1, pt2);
    // pt1[sizeof(pt1)-1] = "\0";
}

int main(){
    char str1[30] = "Minhas String";
    char str2[] = "maior";

    minha_strcat(str1, str2);
    printf("%s\n", str1);
}