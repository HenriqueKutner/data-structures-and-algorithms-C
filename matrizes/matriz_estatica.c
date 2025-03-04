#include <stdio.h>
#include <stdio.h>
#define N_ROWS 2
#define N_COLS 3

int main() {
    // int n_rows = 2;
    // int n_cols = 3;


    int m[N_ROWS][N_COLS] = {
        {0, 1, 2}, 
        {3, 4, 5}
    };

    for (int i = 0; i < N_ROWS; i++) {
        for(int j = 0; j < N_COLS; j++){
            printf("&m[%d][%d] = %p, m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        puts("");
    }
    return 0;
}