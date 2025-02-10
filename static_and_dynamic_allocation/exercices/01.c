#include<stdio.h>


void imprime(int v[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("Elementos do vetor = %d\n", v[i]);
    }
}


int main(){
    int vetor[4] = {1, 2, 3, 4};
    imprime(vetor, 4);
    return 0;
}