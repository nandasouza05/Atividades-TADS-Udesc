#include <stdio.h>

int main()
{
    int vetor[20], cont = 0;

    printf("Digite os numeros:\n");

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0)
        {
            cont++;
        }
        
    }
    printf("NUMEROS:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("QUANTIDADE DE PARES: %d\n", cont);

    return 0;
}
