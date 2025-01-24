#include <stdio.h>
/*
Essa é uma função que recebe três valores. 
x vai receber uma cópia do valor a
y vai eceber uma cópia do valor b
z vai receber o endereço de memória de c
*/
void soma(int x, int y, int *z){
  *z = x + y;
}

/*
Crie uma funcção que faça soma e subtração ao mesmo tempo. 

int *som = endereço de memória de soma 
int *som tem um endereço de memória ex. A100 e também um valor, nesse caso o endereço de ex. C A104
Como eu leio int *som? Assim: Para que valor inteiro esse ponteiro está apontando?
*/

void soma_e_subtracao(int x, int y, int *som, int *sub){

  *som = x + y;
  *sub = x - y;
}

int main()
{
  int a = 10;
  int b = 20;
  int soma;
  int subtracao;
  soma_e_subtracao(a, b, &soma, &subtracao);
  printf("Soma = %d e a subtracao é %d", soma, subtracao);

}