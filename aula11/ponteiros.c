#include <stdio.h>
#include <stdbool.h>

int imprime(char *s) {
  while (*s != '\0')
    putchar(*s++);
}

int main(void) {
  
  //char u[] = {0x75, 0x6E, 0x6B, 0x6E, 0x6F,0x77, '\n'};
  char *u = "fernando\n";

  char *s = "uma frase muito grande";
  imprime(s);
  
  
 //imprime(u);

  return 0;
}
 
