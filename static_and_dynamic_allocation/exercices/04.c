/*
Vetores dinâmicos
Crie uma função que recebe o ponteiro de um vetor e 
seu tamanho e imprima os elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>

void imprime(int v[], int tam) {
    for(int i = 0; i < tam; i++){
        printf("%d\n", v[i]);
    }
}

int main() {
    int *vh =  (int *) calloc(5, sizeof(int));
    /*
    o vh tem um endereço de memória na stack e guarda o valor
    do endereço do primeiro valor presente na heap
    */
    printf("Endereço de memória de vh na stack =  %p\n", &vh);
    printf("Endereço do primeiro valor na heap =  %p\n", vh);
    printf("Provando ser o mesmo = %p\n", &vh[0]);
    imprime(vh, 5);
    free(vh);
    vh = NULL;
    return 0;
}