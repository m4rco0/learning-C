#include <stdio.h>

/*
  Conjunção (E, AND)
  0 0 -> 0
  0 1 -> 0
  1 0 -> 0
  1 1 -> 1
  Disjunção (Ou, OR)
  0 0 -> 0
  0 1 -> 1
  1 0 -> 1
  1 1 -> 1
*/

int main(void) {
  int a = 10;
  int b = 8;

  //  >, <, ==, !=, <= , >=, ===, !
  printf("O resultado: %d\n", !(!(32 > 8) && 3 == 9));
  return 0;
} 
