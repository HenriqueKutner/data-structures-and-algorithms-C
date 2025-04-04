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

hexadecimal = 0x7ffd423fd274 - em sistemas x64 endereços na stack começam em 0x7

decimal HEX BINARY
   0     0   0000
   10    A   1010
*/

#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;
    int c = 5;
    int *d;
    printf("Endereços das variáveis:\n");
    printf("&a = %p\n", (void*)&a);
    printf("&b = %p\n", (void*)&b);
    printf("&c = %p\n", (void*)&c);
    printf("&d = %p\n", (void*)&d);


    // Imprimindo tamanhos ocupados na memória ram
    printf("Tamanho de int: %zu bytes\n", sizeof(&a)); // 8 bytes
    printf("Tamanho de int: %zu bytes\n", sizeof(a)); // 4 bytes
    printf("Tamanho de int: %zu bytes\n", sizeof(d)); // 8 bytes
    printf("Tamanho de int: %zu bytes\n", sizeof(*d)); // 4 bytes

    // Percorrendo a stack byte a byte
    printf("\nPercorrendo a memória:\n");
    unsigned char *ptr = (unsigned char*)&a; // Aponta para a
    for (int i = 0; i < 32; i++) { // Lendo 32 bytes
        printf("%p -> 0x%02x\n", ptr, *ptr);
        ptr++;
    }
    return 0;
}