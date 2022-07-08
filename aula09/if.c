#include <stdio.h>

int main(void) {
  int a = 350;
  int chave = 3;

  if (-1 == a && a < 400){
    printf("chave: %d\n", chave);
    printf("oi\n");
  }
  else if ( a < 500) {
    puts("a eh menor que 500");
  }
  else if (a == 350) {
    puts("a eh 350");
  }
   else {
     printf("if == false\n");
     puts("laall");
   }
  //ternario
  (a == 3) ? puts("3") : puts("não sei o valor de a");

  printf("O resultado eh: %d\n", a);
  return 0;
} 
