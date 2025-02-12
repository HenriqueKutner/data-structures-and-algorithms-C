/*
Imprima os endereços de memória e valores do
vetor na main e dentro de cada função;
*/

#include <stdio.h>

void imprima(int v[], int tam){
    for(int i = 0; i < tam; i++){   
        printf("Endereço = %p, Valor = %d\n", &v[i] ,v[i]);
    }
};

int main(){
    int vetor[4] = {1, 2, 3, 4};
    imprima(vetor, 4);
    return 0;
}
