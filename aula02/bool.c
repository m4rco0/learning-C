#include <stdio.h>
#include <stdbool.h>

int main(void) {
  bool b;
  char c;
  c = 0;
  c = 1;

  b = true;
  b = false;

  printf("O tamanho de b (bool) eh: %lu\n", sizeof b);

  b = true;
  printf("O valor de b eh: %i\n", b);

  return 0;
}
