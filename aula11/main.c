#include <stdio.h>
#include <stdlib.h>

int main(int x,char *v[]) {
    char s[10] = "unknow\n"; //0-9

    printf("%x\n", s[7]);
    printf("%c\n", *(s+7));

    printf("%c\n", 7[s] );
    printf("%c\n", *(7+s));

    return 0;
}
