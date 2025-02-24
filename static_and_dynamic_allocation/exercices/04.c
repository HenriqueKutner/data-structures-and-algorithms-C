/*
1. Crie uma funcao que aloque um 
vetor de double e o retorne. 
*/

#include <stdio.h>
#include <stdlib.h>


double* aloca_vetor() {
    double *vh = (double*) calloc(5, sizeof(double));
    return vh;
}


int main() {\
    double *t = aloca_vetor();
    printf("%f\n", t);
    free(t);
    return 0;
}