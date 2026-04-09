#include <stdio.h>

int eh_palindromo(char* str1);

int eh_palindromo(char* str1){
    char* pt1 = str1;
    char* pt2 = str1;
    while(*pt2 != '\0'){// \0 = fim
        pt2++;
    }
    pt2--;
    while(pt1<pt2){
        if(*pt1!=*pt2){
            return 0;
        }
        pt1++;
        pt2--;
    }
    return 1;
}

int main(){
    char str1[30] = "arara";
    char str2[30] = "banana";

    if(eh_palindromo(str1)){
        printf("%s é palindromo\n", str1);
    } else {
        printf("%s não é palindromo\n", str1);
    }

    if(eh_palindromo(str2)){
        printf("%s é palindromo\n", str2);
    } else {
        printf("%s não é palindromo\n", str2);
    }
}