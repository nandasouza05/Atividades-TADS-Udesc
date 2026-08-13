#include <stdio.h>

int main()
{
    int x;
    float maior = -999999, menor = 999999;

    printf("Digite a quantidada de valores:\n");
    scanf("%d", &x);

    if (x <= 0)
    {
        printf("O numero precisa ser positivo e diferente de zero!");
    }else{
        
        float vetor[x];

        printf("Digite os valores:\n");

        for (int i = 0; i < x; i++)
        {
            scanf("%f", &vetor[i]);
            
            if (vetor[i] >  maior)
            {
                maior = vetor[i];
            }
            
            if (vetor[i] < menor)
            {
                menor = vetor[i];
            }
        }
        printf("Maior numero = %.2f\n", maior);
        printf("Menor numero = %.2f\n", menor);
    }
    return 0;
}


