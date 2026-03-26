#include<stdio.h>



/*void trocainvert(int v[], int tam){
    int *ptr = v;
    int *prt2 = v+tam-1;
    while(ptr<prt2){
        int temp = *ptr;
        *ptr = *prt2; 
        *prt2 = temp;
        ptr++;
        prt2--;
    }
}*/

void trocar(int v[], int tam){
    for(int i = tam-1; i>0; i--){
        int temp = *v;
        *v = *(v+i);
        *(v+i) = temp;
        v++;
    }
}

void exibeVetor(int v[], int tam){
    for (int i = 0; i<tam; i++){    
        printf("%d ", *v);
        v++;
    }
    printf("\n");
}

int main(){
    int vet[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    trocainvert(vet, 10);
    exibeVetor(vet, 10);
}