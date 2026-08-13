#include <stdio.h>

int main()
{
    int vetor[10], num;

    printf("Digite os numeros:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Escolha um numero:\n");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        if (num == vetor[i])
        {
            printf("ESTA PRESENTE NA POSICAO %d DO VETOR!\n", i);}
    }
    
    return 0;
}
