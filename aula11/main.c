#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;  //4 bytes  alocados para um int32

    printf("o endereço de i eh: %p\ntamanho de i: %zu\n\n", &i, sizeof i);

    int *p;  
    printf("o enderço de p eh: %p\ntamanho de p: %zu\n", &p, sizeof p);
    printf("tamanho de p: %p\n\n", p);
    
    printf("conteudo de p: %p\n", p);
    
    printf("p = &i;\n\n");
    p = &i;

    printf("o enderço de p eh: %p\ntamanho de p: %zu\n", &p, sizeof p);
    printf("conteudo de p: %p\n", p);
    *p = 9;//test
    
    printf("%d\n", *p);

    return 0;
}
