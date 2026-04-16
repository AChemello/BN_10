#include <stdio.h> 
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

typedef union{
    char a[4];
    int b;
}Teste;

int main(){
    Pessoa p1;
    Teste t1;
    
    // printf("Digite o nome: ");
    // scanf("%s", p1.nome);    
    // printf("Digite a idade: ");
    // scanf("%d", &p1.idade);
    // printf("Nome: %s, Idade: %d\n", p1.nome, p1.idade);

    printf("Digite um valor para a: ");
    scanf("%s", t1.a);
    printf("Valor de a: %s\n", t1.a);
    printf("Valor de b: %d\n", t1.b);
}


