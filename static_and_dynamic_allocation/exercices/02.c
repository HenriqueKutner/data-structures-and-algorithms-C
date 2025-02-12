/* 
Crie uma função que recebe o ponteiro de um vetor
via colchetes[] e seu tamanho e imprima os elememtos
do vetor.
 */

#include <stdio.h>

void recebe_vetor(int v[], int tam){
    for(int i = 0; i < tam; i++){
        printf("valores do vetor: %d\n", v[i]);
    }
}



 int main() {
    int v[4] = {1,2,3,4};
    recebe_vetor(v, 4);
    return 0;
 }