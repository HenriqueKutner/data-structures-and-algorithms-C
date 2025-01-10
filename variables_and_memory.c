#include <stdio.h>

int main()
{
  // An integer have 4 bytes. A byte have 8 bits. An integer have 32 bits
  int a = 10;
  int b, c;

  // & memory value
  // * value
  // &a print the memory address of variable 'a'
  // %p In the printf function we have to pass what type the value will be print, so in this case, we want to print the memory value and it is represent by percentage % follow by p
  // %d Like before, we want to tell the printf what we want to print so we need to pass first the % follow by 'd' means integer
  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n\n", &c, c);

  b = 20;
  c = a + b;

  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n\n", &c, c);

  // gcc variables_and_memory.c -o variables_and_memory To compile and generate an output

    return 0;
}