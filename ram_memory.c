// Cada endereço na RAM representa 1 byte (8 bits)
/*  
A memória RAM é byte-endereçável → 
Cada endereço aponta para 1 byte (8 bits).

Arquiteturas x64 (64 bits) têm registradores 
de 64 bits. 
Isso não significa que um endereço contém 64 bits, 
apenas que a CPU pode LER e ESCREVER até 64 bits (8 bytes)
de uma vez. Um de x32 até 4 bytes. 
Um ponteiro aloca 8 bytes.
A RAM sempre é endereçada por byte (1 byte por endereço).
1 byte = 8 bits.
Se um programa armazenar um long long (64 bits), 
ele usará 8 bytes consecutivos.
*/

#include <stdio.h>
int main() {
    int a = 4;
    int b = 5;
    int c = 5;
    int *d;
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    return 0;
}