#include <stdio.h>

int main()
{
    int vetor[10];

    printf("Digite os numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("ORDEM DE ENTRADA:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("ORDEM INVERSA:\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
