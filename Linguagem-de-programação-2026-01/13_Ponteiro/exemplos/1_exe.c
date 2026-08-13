#include <stdio.h>

void funcao(int *p){
    (*p)++;
}
int main()
{
    int x = 5;
    funcao(&x);
    printf("%d", x);
    /*int *p = NULL;
    p = &x;*/
    return 0;
}
