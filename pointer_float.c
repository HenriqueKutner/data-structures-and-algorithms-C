#include <stdio.h>
#include <stdlib.h>

int main (){
  float z = 2.5;
  float *fp;
  fp = &z;

  printf("&z = %f\n", *&z);
  return 0;
}