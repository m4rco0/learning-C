#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  float f = 40.2390;
  
  printf("O tamanho do f (float): %zu bytes / %zu bits\n", sizeof f, sizeof f * 8);

  printf("Valor de i: %.20f\n", f / 3);

  return 0;
}
