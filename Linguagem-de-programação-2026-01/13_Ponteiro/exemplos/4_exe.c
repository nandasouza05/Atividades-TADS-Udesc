#include <stdio.h>

int main()
{
    int vetor[] = {10,20,30};

    printf("%p\n", vetor);
    printf("%p\n", &vetor);
    printf("%p\n", vetor[0]);
    return 0;
}