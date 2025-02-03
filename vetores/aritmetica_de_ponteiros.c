/*
O sistema operacional guarda o primeiro endereco, no caso,
S104 e a partir do mesmo realiza os calculos.
(v + 0) = &v[0] = S104
Vamos pegar o endereco de memoria atual S104 e somar 
com a quantidade de deslocamentos
multiplicando pela quantidade de bytes do tipo,
que no caso e inteiro com 4 bytes.
&v[1]
s104 + 1 * 4 = s108
(v + 1) = &v[1] = 108

Outro exemplo:
Quero acessar o valor que esta nesse vetor v[3]
O sistema le desse forma:
O endereco base nesse exemplo e S104
* = Quero o valor
v[3] = *(v + 3)
v[3] = *(s104 + 3 * 4)
v[3] = *(s116)
v[3] = 12
*/

#include <stdio.h>

int main() {
    /*
    Both &v and v will print the same address because v represents 
    the address of the first element, and &v represents the address 
    of the entire array (which is the same location in memory)
    */
    int v[5] = {10, 5, 4, 16, 1};
    printf("&v = %p, v = %p\n\n", &v, v);

    for (int i = 0; i < 5; i++) {
        // v = 0x7ffed2828c70
        //  *(v + i) =  *(0x7ffed2828c70 + 4) = 1
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
        printf("(v + %d) = %p, *(v + %d) = %d\n\n", i, (v + i), i, *(v + i));
    }
    /*

    &v = 0x7ffed2828c70, v = 0x7ffed2828c70

    &v[0] =  0x7ffed2828c70, v[0] = 10
    (v + 0) = 0x7ffed2828c70, *(v + 0) = 10

    &v[1] =  0x7ffed2828c74, v[1] = 5
    (v + 1) = 0x7ffed2828c74, *(v + 1) = 5

    &v[2] =  0x7ffed2828c78, v[2] = 4
    (v + 2) = 0x7ffed2828c78, *(v + 2) = 4

    &v[3] =  0x7ffed2828c7c, v[3] = 16
    (v + 3) = 0x7ffed2828c7c, *(v + 3) = 16

    &v[4] =  0x7ffed2828c80, v[4] = 1
    (v + 4) = 0x7ffed2828c80, *(v + 4) = 1
        
    */
    return 0;
}
