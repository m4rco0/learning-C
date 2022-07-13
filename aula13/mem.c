#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(pxx, size) { \
    pxx = malloc(size); \
    if (pxx == NULL) { \
        fprintf(stderr, "memoria insuficiente\n"); \
        exit(1); \
    } \
}

void *malloc_s(size_t size) {
    void *pxx;
    pxx = malloc(size);
    if (pxx == NULL)
    {
        fprintf(stderr, "memoria insuficiente\n");
        exit(1);
    }
    return pxx;
}

int main(int x,char *v[]) {

    int *p, i;

    MALLOC(p,  5 * sizeof(int));
    memset(p, 0, 5 * sizeof(int));//preenchendo os bytes com 0
    

    *(p+0) = 9;
    *(p+1) = 43;
    *(p+2) = 20;
    *(p+3) = 40;
    *(p+4) = 50;


    
    for (i=0; i<6; i++) {
        printf("%d\n", *(p + i));
    }

    p = realloc(p, sizeof(int) * 6);
    *(p+5) = 10;

    free(p);

    return 0;

}
