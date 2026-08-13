#include <stdio.h>

int main()
{
    int vetor[10], inverso[10];

    printf("Digite os numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    int j = 9;
    for (int i = 0; i < 10; i++)
    {
        inverso[i] = vetor[j];
        j--;
    }
    printf("VETOR NORMAL:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("[%d] ", vetor[i]);
    }
    printf("\nVETOR INVERSO:\n"); 
    for (int i = 0; i < 10; i++)
    {
        printf("[%d] ", inverso[i]);
    }
    return 0;
}
