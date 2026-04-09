#include <stdio.h>

void remove_espacos_extras(char* str);

void remove_espacos_extras(char* str){
    char* ptr1 = str;
    char* ptr2 = str;
    int espaco = 0;
    while(*ptr1 != '\0'){
        if(*ptr1 != ' '){
            *ptr2 = *ptr1;
            ptr2++;
            espaco = 0;
        } else if(espaco == 0){
            *ptr2 = *ptr1;
            ptr2++;
            espaco = 1;
        }
        ptr1++;
    }
    *ptr2 = '\0';
}

int main(){
    char str1[] = "Frase   com     espaços bem       depois  disso        que eu     falei";

    printf("Antes\n%s\n", str1);
   
    remove_espacos_extras(str1);

    printf("Depois:\n%s\n", str1);

}