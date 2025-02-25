/*
Crie uma funçao que desaloque um dado vetor
setando-o como NULL após a desalocaçao
*/

#include <stdio.h>
#include <stdlib.h>

void desaloca_vetor(int **v){
    // Liberando a heap
    free(*v);
    // Inserindo null no valor da stack
    *v = NULL;
}

int main() {
    int *v = (int*) calloc(4, sizeof(int));
    printf("Endereço de v (stack) = %p, Valor de v = %p, Conteúdo de v = %d\n", &v, v, *v);
    for(int i = 0; i < 4; i++){
        printf("Endereço = %p, Valor = %d\n", &v[i], v[i]);
    }

    desaloca_vetor(&v);
    puts("***********************************");
    for(int i = 0; i < 4; i++){
        printf("Endereço = %p, Valor = %d\n", &v[i], v[i]);
    }

    
    
    return 0;
}