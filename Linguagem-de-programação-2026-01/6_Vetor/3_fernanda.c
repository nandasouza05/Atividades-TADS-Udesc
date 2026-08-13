#include <stdio.h>

int main()
{
    int x;
    float media, sum = 0;

    printf("Digite a quantidada de valores:\n");
    scanf("%d", &x);

    if (x <= 0)
    {
        printf("O numero precisa ser positivo e diferente de zero!");
    }else{
        
        int vetor[x];

        printf("Digite os valores:\n");

        for (int i = 0; i < x; i++)
        {
            scanf("%d", &vetor[i]);
            sum += vetor[i];
        }
        media = sum / x;

        printf("Media = %.2f\n", media);

        for (int i = 0; i < x; i++)
        {
            if (vetor[i] > media)
            {
                printf("%d eh maior que a media\n", vetor[i]);
            }
        }
        
    }
    return 0;
}

