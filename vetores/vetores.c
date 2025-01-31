#include <stdio.h>

int main() {
    int v[5] = {0,1,2,3,4}; 

    for (int i = 0; i < 5; i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    } 
    printf("&v[6] = %p, v[6] = %d\n", &v[6], v[6]);
 
    for(int a = 0; a < 5; a++){
        scanf("%d", &v[a]);
    }

    int meu_valor = 20;
    int *p = &meu_valor;
    printf("%p", p);

}