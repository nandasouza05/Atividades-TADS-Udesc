#include <stdio.h>

void incrementar(int *px);

int main()
{
    int x = 10;
    incrementar(&x);
    printf("%d", x);

    return 0;
}

void incrementar(int *px){
    (*px)++;
}
