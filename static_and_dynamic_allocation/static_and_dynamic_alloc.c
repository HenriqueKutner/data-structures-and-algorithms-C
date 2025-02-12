#include <stdio.h>
#include <stdlib.h> // Contém o malloc e calloc

int main () {
    // alocação de um vetor estático (stack)
    int vs[5] = {0, 10, 20, 30, 40};

    puts("### ENDEREÇO DE vs");
    printf("&vs = %p", &vs);
    puts("\n");

    puts("### VETOR ESTÁTICO");
    for(int i = 0; i < 5; i++) {
        printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
    }
    puts("\n");

    // Alocação de um vetor dinâmico usando malloc (Heap)

    int *vh_mal = (int *) malloc(5 * sizeof(int));  // todos os elementos possuem lixo de memória

    puts("### ENDEREÇO DE vh_mal");
    printf("&vh_mal = %p, vh_mal = %p\n", &vh_mal, vh_mal);
    puts("\n");

    puts("### VETOR DINAMICO COM MALLOC");
    for(int i = 0; i < 5; i++) {
        printf("&vh_mal[%d] = %p, vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
    }
    puts("\n");


    // Alocação de um vetor dinâmico usando calloc (Heap)

    int *vh_cal = (int *) calloc(5, sizeof(int)); 

    puts("### ENDEREÇO DE vh_cal");
    printf("&vh_cal = %p, vh_cal = %p\n", &vh_cal, vh_cal);
    puts("\n");

    puts("### VETOR DINAMICO COM MALLOC");
    for(int i = 0; i < 5; i++) {
        printf("&vh_cal[%d] = %p, vh_cal[%d] = %d\n", i, &vh_cal[i], i, vh_mal[i]);
    }
    puts("\n");

    return 0;
}