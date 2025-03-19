#include <stdio.h>
#include <stdlib.h>
#define N_ROWS 2
#define N_COLS 3

// void imprime_endereco_do_vetor_simples_heap(int **vsh) {
//     printf("Imprimindo endereço de vsh presente na stack: %p\n", vsh);
// }

int main() {
    /*
    O vetor_simples é armazenado na memória stack e
    guarda o valor do primeiro endereço de memória
    da sequencia de endereços da heap.
    */
    int vetor_simples_stack[4] = {0, 1, 2, 3}; 
    // for(int i = 0; i < 4; i++) {
    //     printf("Endereço de memória: %p\n", &vetor_simples_stack[i]);
    //     printf("Valor na stack: %d\n", vetor_simples_stack[i]);
    // }
    int *vetor_simples_heap = (int*) calloc(4, sizeof(int));
    // printf("Endereço presente na stack: %p\n", &vetor_simples_heap);
    // printf("Valor: %p\n", vetor_simples_heap);
    // printf("Conteúdo: %d\n", *vetor_simples_heap);
    // imprime_endereco_do_vetor_simples_heap(&vetor_simples_heap);
    int ms[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    /*
    A alocaçao é contígua.   
    */
    // for (int i = 0; i < 2; i++) {
    //     printf("Endereço da linha %d: %p\n", i, &ms[i]);
    //     for(int j = 0; j < 3; j++){
    //         printf("&ms[%d][%d] = %p, ms[%d][%d] = %d\n", i, j, &ms[i][j], i, j, ms[i][j]);
    //     }
    //     puts("");
    // }

    // Alocação dinamica
    // Uma matriz nada mais é que um vetor de vetores.
    int mheap[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Tentativa de alocar uma matriz dinamicamente 

    // int *linha1 = (int*) calloc(3, sizeof(int));
    // int *linha2 = (int*) calloc(3, sizeof(int));
    // for(int i = 0; i < 3; i++){ 
    //     linha1[i] = mheap[0][i];
    //     printf("Endereço: %p, Valor: %d\n", &linha1[i], linha1[i]);  
    // }
    // for(int i = 0; i < 3; i++){ 
    //     linha2[i] = mheap[1][i];
    //     printf("Endereço: %p, Valor: %d\n", &linha2[i], linha2[i]);  
    // }

    // Alocando uma matriz dinamicamente 
    // Nao há garantias que o espaço será contíguo
    

    int **m = (int**) calloc(N_ROWS, sizeof(int*));

    for(int i = 0; i < N_ROWS; i++){
        m[i] = (int*) calloc(N_COLS, sizeof(int));
    }
    // Simulando valores inseridos na linha/coluna
    int count = 0;
    for(int i = 0; i < N_ROWS; i++) {
        for(int j = 0; j < N_COLS; j++){
            m[i][j] = count++;
            printf("Endereço da linha: %p, Endereço da coluna: %p, valor m[%d][%d]: %d\n", m[i], &m[i][j], i, j, m[i][j]);
        }
    }
    return 0;
}