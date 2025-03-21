#include <stdio.h>
#define N_SLICES 2
#define N_ROWS 2
#define N_COLS 3

int main() {

    int m[N_SLICES][N_ROWS][N_COLS] = {
        // fatia [0]
        {
            {0, 1, 2}, // linha [0]
            {3, 4, 5} // linha [1]
        },
        // fatia [1]
        {
            {6, 7, 8}, // linha [0]
            {9, 10, 11}
        }
    };

    printf("&m = %p, m = %p\n\n", &m, m);

    // para cada fatia
    for (int k = 0; k < N_SLICES; k++) {
        // para cada linha
        for(int i = 0; i < N_ROWS; i++) {
            // para cada coluna
            for(int j = 0; j < N_COLS; j++){
                printf("&m[%d][%d][%d] = %p, m[%d][%d][%d] = %d\n", 
                    k, i, j, 
                    &m[k][i][j],
                    k, i, j,
                    m[k][i][j]
                );
            }
        }

    }

    return 0;
}