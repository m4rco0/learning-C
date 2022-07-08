#include <stdio.h>
#include <stdbool.h>

int main(void){
  int a [] = {2020, 2021, 2022};

  for (int i =0; i <3; i++)
    printf("%d\n", *a + 2);


  return 0;
}