/*
Crie uma funçao que desaloque um dado vetor
setando-o como NULL após a desalocaçao
*/

#include <stdio.h>
#include <stdlib.h>

void desaloca_vetor(int v[]){
    free(*v);
}

int main() {
    int *v = (int*) calloc(4, sizeof(int));
    for(int i = 0; i < 4; i++){
        printf("%d\n", v[i]);
    }
    desaloca_vetor(v);
    puts("***********************************");
    for(int i = 0; i < 4; i++){
        printf("%d\n", v[i]);
    }
    return 0;
}