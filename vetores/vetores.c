#include <stdio.h>

int main() {
    int v[5] = {0,1,2,3,4};
    printf("%p, %p, \n", &v, v); 
    for (int i = 0; i < 5; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    } 

    // &v = 0x7fffe9f22720, v = 0x7fffe9f22720, 
    // &v[0] = 0x7fffe9f22720, v[0] = 0
    // &v[1] = 0x7fffe9f22724, v[1] = 1
    // &v[2] = 0x7fffe9f22728, v[2] = 2
    // &v[3] = 0x7fffe9f2272c, v[3] = 3
    // &v[4] = 0x7fffe9f22730, v[4] = 4

}