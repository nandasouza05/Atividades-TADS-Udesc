#include <stdio.h>

int main()
{
    int vetor[15], sum = 0;

    printf("Digite os numeros:\n");

    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        printf("[%d] = %d\n",i , vetor[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        if (i % 2 != 0)
        {
            sum += vetor[i];
        }
    }
    printf("A SOMA DOS VALORES EM POSICOES IMPARES EH: %d\n", sum);
    return 0;
}
