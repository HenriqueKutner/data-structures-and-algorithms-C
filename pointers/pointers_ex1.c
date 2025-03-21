/*
Write the values of the variables
for each instruction of the program
below. What is the output of this
program?
*/

/*
"Vamos lá,
int a é um inteiro. Um inteiro geralmente reserva 4 bytes de memória RAM.
Cada byte tem 8 bits, ou seja, são reservados 32 bits de memória.
Esses 4 bytes ocupam endereços consecutivos na memória, por exemplo, 5000, 5001, 5002 e 5003.
Se eu declarar int a = 4;, o valor 4 será armazenado como um número binário nos 4 bytes (32 bits).
O valor binário de 4 é 00000000 00000000 00000000 00000100, que será distribuído nesses bytes consecutivos.
O compilador associa a variável a ao endereço inicial, neste caso, 5000.
Ele sabe que, como int ocupa 4 bytes, os valores correspondentes estão nos endereços 5000, 5001, 5002 e 5003. (Aritmetica de ponteiros)
*/

#include <stdio.h>

int main()
{
  int a, b, *p1, *p2;
  a = 4;
  b = 3;
  p1 = &a;
  p2 = p1;
  printf("*p1 O valor inteiro que p1 está apontando é = %d\n &a = %p\n", *p1, &a);
  printf("O valor de p1 é = %p\n, O endereço de memória de 'a' é = %p\n", p1, &a);
  printf("*p1 = %d\n *p2 = %d\n", *p1, *p2);
  printf("a = %d\n b = %d\n", a, b);
  *p2 = *p1 + 3;
  printf("*p2 = %d\n", *p2);
  b = b * (*p1);
  (*p2)++;
  printf("*p2 = %d\n", *p2);

  return 0;
};