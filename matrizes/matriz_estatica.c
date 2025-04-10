#include <stdio.h>
#include <stdio.h>
#define N_ROWS 2
#define N_COLS 3

int main() {
    int m[N_ROWS][N_COLS] = {
        {0, 1, 2}, 
        {3, 4, 5}
    };
    printf("&m = %p, m = %p\n", m, &m);
    for (int i = 0; i < N_ROWS; i++) {
        for(int j = 0; j < N_COLS; j++){
            printf("&m[%d][%d] = %p, m[%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        puts("");
    }
    // &m = 0x7ffeba5f6280, m = 0x7ffeba5f6280
    // &m[0][0] = 0x7ffeba5f6280, m[0][0] = 0
    // &m[0][1] = 0x7ffeba5f6284, m[0][1] = 1
    // &m[0][2] = 0x7ffeba5f6288, m[0][2] = 2
    
    // &m[1][0] = 0x7ffeba5f628c, m[1][0] = 3
    // &m[1][1] = 0x7ffeba5f6290, m[1][1] = 4
    // &m[1][2] = 0x7ffeba5f6294, m[1][2] = 5
    return 0;
}