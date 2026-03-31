#include<stdio.h>

void exibeVetor(int v[], int tam);

void ordenaVetor(int v[], int tam);

void exibeVetor(int v[], int tam){
    for (int i = 0; i<tam; i++){    
        printf("%d ", *v);
        v++;
    }
    printf("\n");
}

void ordenaVetor(int v[], int tam){
   
    for(int i = 0; i<tam-1; i++){
        int *pont = v;
        int *pont2 = v+1;
        for(int j = 0; j<tam-1; j++){
            if(*pont > *pont2){
                int temp = *pont;
                *pont = *pont2;
                *pont2 = temp;
            }
            pont++;
            pont2++;
        }
    }
}

int main(){
    int vet[] = {3, 1, 7, 8, 4, 6, 12, 0, 4, 2};
    ordenaVetor(vet, 10);
    exibeVetor(vet, 10);
}