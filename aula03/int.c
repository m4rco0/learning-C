#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
  size_t i = 0;

  printf("O tamanho do i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i * 8);
  printf("Valor de i: %ld\n", i);

  return 0;
}
