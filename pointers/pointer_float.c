#include <stdio.h>
#include <stdlib.h>

int main()
{
  float z = 2.5;
  float *fp;
  fp = &z;

  printf("*&z = %f\n", *&z); // 2.5
  printf("*fp = %p\n", *fp); // 2.5
  // printf("**&fp = %f\n", **&fp);
  return 0;
}