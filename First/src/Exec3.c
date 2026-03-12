#include <stdio.h>// inclui cabeçalho de biblioteca, entrada e saida

int main(){
    int v [10] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8};
    int r = 0;
    int t;
    for(int i = 0; i <= 9; i++){
        t = 0;
        for(int j = i + 1; j < 10; j++){
               if(v[i] == v[j]){
                r++;
            }
            if(t == 1){
                r++;
           }
        
        }
    }
    printf("%d", r);
}