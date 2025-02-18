/*
Vetores dinâmicos
Crie uma função que recebe o ponteiro de um vetor e 
seu tamanho e imprima os elementos do vetor.
*/

#include <stdio.h>
#include <stdlib.h>
// 'const' para evitar que o vetor original seja alterado
void imprime(const int v[], int tam) {
    for(int i = 0; i < tam; i++){
        printf("%d\n", v[i]);
    }
}

void desaloca_vetor(int **v){
    // Desaloca na heap
    free(*v);
    v = NULL;
}

int main() {
    /* 
    (int *) retorno de um pointer to integer
    */
    int *vh =  (int *) calloc(5, sizeof(int));
    /*
    o vh tem um endereço de memória na stack e guarda o valor
    do endereço do primeiro valor presente na heap.
    */
    printf("Endereço de memória de vh na stack =  %p\n", &vh);
    printf("O valor de vh é o primeiro endereço presente na heap =  %p\n", vh);
    printf("Primeiro endereço presente na heap é o valor de vh = %p\n", &vh[0]);
    // imprime(vh, 5);
    puts("Antes de desalocar vetor dinamico");
    printf("&vh = %p, vh = %p\n", &vh, vh);
    /*
    O vh guarda um ponteiro de inteiro, para liberar essa caixinha
    eu preciso passar o endereço de memória dela. Como ela guarda o endereço 
    de memória da primeira caixinha da heap e ela é um ponteiro, isso resulta em um ponteiro de ponteiro.
    */
    desaloca_vetor(&vh);
    puts("Após de desalocar vetor dinamico");
    printf("&vh = %p, vh = %p\n", &vh, vh);
    return 0;
}