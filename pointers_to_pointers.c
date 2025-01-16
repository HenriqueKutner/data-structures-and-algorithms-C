/*
int a is an integer
int *p1 is an pointer to integer
int **p2 is an pointer to an pointer that
keeps integer values
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 10;
  int *p1 = &a;
  int **p2 = &p1;
  **p2 = 99;
  return 0;
}

