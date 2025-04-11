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
    Para cada slice vou alocar duas linhas e para cada linha vou alocar tres colunas.
    Primeiro: Para o slice[0] vou alocar a primeira linha.
    Segundo: Para o slice[1] vou alocar a segunda linha.
    Terceiro: Para o slice[0] linha[0] vou alocar tres colunas
    Quarto: Para o slice[0] linha[1] vou alocar tres colunas
    Assim por diante...
    */

    int value = 0;
    for(int i = 0; i < N_SLICES; i++) {
        md[i] = (int**) calloc(N_ROWS, sizeof(int*));
        for(int j = 0; j < N_ROWS; j++) {
            md[i][j] = (int*) calloc(N_COLS, sizeof(int));
            for(int k = 0; k < N_COLS; k++) {
                md[i][j][k] = value;
                value++;
            }
        }
    }

    for(int i = 0; i < N_SLICES; i++) {
        for(int j = 0; j < N_ROWS; j++) {
            for(int k = 0; k < N_COLS; k++) {
                printf("md[%d][%d][%d] = %d\n", i, j, k, md[i][j][k]);
            }
        }
    }
}