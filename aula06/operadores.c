#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

/*
  = atribuição
  + - unarios(positivo e negativo)
  + - binarios(adição e subtração)
  * / (multiplicar e dvidir)
  % ** (modulo e exponenciação)
  ++ (incremento)
  -- (decremento)

*/

int main(void) {
  int a;

  a = (4 + 2) * 3;
  printf( "%d\n", ++a);
  printf("%d\n", --a);

  return 0;
}
