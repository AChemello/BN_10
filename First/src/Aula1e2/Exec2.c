#include <stdio.h>// inclui cabeçalho de biblioteca, entrada e saida
#include <stdlib.h>// outro, uso geral

int main(){
    int t;
    printf ("Digite o tempo em segundos: ");
    scanf ("%d", &t);
    int h = t / 3600;
    int m = t % 3600 /60;
    int s = t % 3600 % 60;    

    printf("%02d" "h %02d" "min %02d" "s", h, m ,s);
}