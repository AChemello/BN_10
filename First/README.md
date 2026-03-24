# meuprojetoaa

a++ pós incremento

++a pré incremento

O operador & retorna o endereço do seu operando
O modificador %p exibe o valor como um endereço de memória em hexa

int main(){
    int b = 200;
    printf("%p\n", &b);
    //int* a = &b;
    a é um ponteiro para um int [*], a armazena o endereço de b
    n pode inicializar um int apartir de um int*


    printf("Conteúdo apontado por a: %d", *a);
    Quando usado à esquerda de uma variável, o operador * é chamado de operador de dereferência
    *a está acessando efetivamente o b(200)
                    0    1    2    3    4    5    6    7    8    9
    char c[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
        
    Podemos declarar um ponteiro p para ele:

    char* p = c; // não precisa &, c já é um ponteiro

    printf("%c\n", *p);    // exibe o primeiro elemento do array
        printf("%c\n", p[0]);  // idem

        printf("%p\n", p);     // exibe o endereço do primeiro elemento
        printf("%p\n", c);     // idem
        printf("%p\n", &c[0]); // idem 

          char* p = c;

        printf("%c\n", *p);     // exibe 'a'
        printf("%c\n", *(p+1)); // exibe 'b'
        printf("%c\n", *(p+2)); // exibe 'c'
        printf("%c\n", *(p+3)); // exibe 'd'

        *ptr++ -> fazer o ponteiro andar para frente

        (*ptr)++ -> faz o elemento dentro do ponteiro incrementar +1, mas nunca avança o ponteiro

        Área de memória será 10 * sizeof(int) = 40 bytes
    }// não dá para saber o endereço

