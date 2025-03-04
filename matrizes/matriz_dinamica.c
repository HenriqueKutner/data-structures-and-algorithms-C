#include <stdio.h>
#include <stdlib.h>

void imprime_endereco_do_vetor_simples_heap(int **vsh) {
    printf("Imprimindo endereço de vsh presente na stack: %p", vsh);
}

int main() {
    /*
    O vetor_simples é armazenado na memória stack e
    guarda o valor do primeiro endereço de memória
    da sequencia de endereços da heap.
    */
    int vetor_simples_stack[4] = {0, 1, 2, 3}; 
    int *vetor_simples_heap = (int*) calloc(4, sizeof(int));
    printf("Endereço: %p\n", &vetor_simples_heap);
    printf("Valor: %p\n", vetor_simples_heap);
    printf("Conteúdo: %d\n", *vetor_simples_heap);
    imprime_endereco_do_vetor_simples_heap(&vetor_simples_heap);
    int matriz_estatica[2][3] = {
        {1, 2, 4},
        {3, 4, 5}
    };


    return 0;
}