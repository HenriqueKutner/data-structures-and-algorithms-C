#include <stdio.h>
int main()
{
  int a = 10;
  int b = 20;
  int c;
  int *ponteiro;
  ponteiro = &a;

  puts("### ANTES DE CHAMAR A FUNÇÃO");
  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n", &c, c);
  printf("&ponteiro = %p, p = %d\n", &ponteiro, *ponteiro);
  return 0;
}