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

Para que existe ponteiros? Eficiência. Imagine uma função que recebe dois valores, eu posso 
fazer de duas maneiras, passar os argumentos e receber na função como variáveis normais, a função cria
uma cópia de cada parametro em uma nova caixa de memória e após o término da função é liberado.asm
Por outra via existe os ponteiros, em que posso passar os argumentos por referencia e a função não precisa
criar uma nova cópia.
*/

void soma_e_subtracao(int x, int y, int *som, int *sub){
  *som = x + y;
  *sub = x - y;
}

void troca(int *x, int *y){
  int aux = *x;
  *x = *y;
  *y = aux;

}

int main()
{
  int a = 10;
  int b = 20;
  int soma;
  int subtracao;
  soma_e_subtracao(a, b, &soma, &subtracao);
  printf("Soma = %d e a subtracao é %d", soma, subtracao);
  troca(&a, &b);

}