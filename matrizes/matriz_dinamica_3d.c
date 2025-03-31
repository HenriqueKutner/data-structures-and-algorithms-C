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

    int ***md = (int***) calloc(N_SLICES, sizeof(int**));
    printf("%p, %p, %d", &md, md, md[0][0][0]);

    // for(int i = 0; i < N_ROWS; i++){
    //     md = (int**) calloc(N_ROWS, sizeof(int*));

    // }
    

}