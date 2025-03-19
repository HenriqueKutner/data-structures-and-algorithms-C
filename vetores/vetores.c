#include <stdio.h>

int main() {
    int v[5] = {0,1,2,3,4};
    printf("%p, %p, \n", &v, v); 
    for (int i = 0; i < 5; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    } 

}