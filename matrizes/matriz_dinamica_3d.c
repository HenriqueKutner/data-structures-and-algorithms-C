#include <stdio.h>
#include <stdlib.h>
#define N_SLICES 2
#define N_ROWS 2
#define N_COLS 3

int main() {

    /*
    Fazer um calloc que guarda a quantidade de slices. 
    Vai ser um ponteiro triplo pois vai apontar para o endereço
    do primeiro slice e o primeiro slice vai apontar para o endereço
    da primeira linha e esse endereço da linha vai guardar o endereço da
    coluna que terá o valor dentro.
    */

    /* 
    md fica na stack como um endereço único apontando para o primeiro slice. 
    */
    int ***md = (int***) calloc(N_SLICES, sizeof(int**));
    // &md = 0x7fff3655f660
    // md = 0x55f8910c82a0
    printf("%p, %p\n", &md, md);
    /*
    Para cada slice vou alocar duas linhas e para cada linha vou alocar 3 colunas

    Primeiro: Alocar duas linhas na heap que apontarao para para as colunas
    */

    // for(int k = 0;)
    

}