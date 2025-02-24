/*
Crie uma funçao que aloque um vetor de double
retornando-o  por referencia.
*/

#include <stdio.h>
#include <stdlib.h>

void alocaVetor(double **vetor, int tamanho) {
    *vetor = (double*) calloc(tamanho, sizeof(double));
    if (*vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1); // Encerra o programa em caso de erro
    }
}

int main() {
    int tamanho = 5;
    double *meuVetor = NULL; // Ponteiro inicializado como NULL

    alocaVetor(&meuVetor, tamanho); // Passamos o endereço do ponteiro

    // Exemplo: Imprimindo os valores iniciais (todos 0.0)
    for (int i = 0; i < tamanho; i++) {
        printf("meuVetor[%d] = %f\n", i, meuVetor[i]);
    }

    free(meuVetor); // Libera a memória alocada
    return 0;
}