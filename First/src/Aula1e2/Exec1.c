#include <stdio.h>// inclui cabeçalho de biblioteca, entrada e saida
#include <stdlib.h>// outro, uso geral

int main(){
    int r;
    printf("Escreva um valor inteiro positivo: $");
    scanf("%d", &r);
    int c = r / 100;
    int ci = r % 100 / 50;
    int d = r % 100 % 50 / 10;
    int cin = r % 100 % 50 % 10 / 5;
    int u = r % 100 % 50 % 10 % 5;
    printf("notas 100 %d\n notas 50 %d\n notas 20 %d\n notas 5 %d\n notas 1 %d\n", c, ci, d, cin, u);
}