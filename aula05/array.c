#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  int c[3];
  printf("O tamanho de c eh: %zu\n", sizeof c);
  printf("O numero de elementos em c eh: %zu\n", sizeof c / sizeof c[0]); 

  c[0] = 'A';
  c[1] = 0x4D;
  c[2] = 10;

  printf("O 0 elemento do array c eh: %d\n", c[0]);
  printf("O 1 elemento do array c eh: %d\n", c[1]);
  printf("O 2 elemento do array c eh: %d\n", c[2]);
  printf("O 5 elemento do array c eh: %d\n", c[5]);
  
  printf("O endereço do array c em memoria: %p\n", c);
  printf("O enderço do array &c em memoria: %p\n", &c);
  return 0;
}
