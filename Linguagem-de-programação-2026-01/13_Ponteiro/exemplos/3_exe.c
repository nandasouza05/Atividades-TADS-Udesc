#include <stdio.h>

int main()
{
    int x;
    int *ptr = NULL;

    ptr = &x;

    //x = 10

    *ptr = 10; //como ptr esta com o endereco de x, 

    printf("%d\n", x);
    printf("%p\n", ptr);
    printf("%p\n", &x);
    return 0;
}
