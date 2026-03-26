#include <stdio.h>

void copia(int v[], int vet2[], int tam);

void copia(int v[], int vet2[], int tam){
    for (int i = 0; i < tam; i++){
        *vet2 = *v;
        vet2++;
        v++;
    }
}

void exibeVetor(int v[], int tam){
    for (int i = 0; i < tam; i++)    {
        printf("%d ", *v);
        v++;
    }
    printf("\n");
}

int main(){
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vet2[10];

    copia(vet, vet2, 10);
    exibeVetor(vet2, 10);
    exibeVetor(vet, 10);
}