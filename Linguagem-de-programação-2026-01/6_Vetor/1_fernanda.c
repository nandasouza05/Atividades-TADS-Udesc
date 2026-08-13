#include <stdio.h>

int main()
{
    int x;
    float sum = 0, res;

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
            sum += vetor[i];
        }
        
        res = sum / x;

        printf("Resultado = %.2f\n", res);
    }
    return 0;
}

// VERSÃO COM O TAMANHO NA MACRO
/*#include <stdio.h>
#define TAMANHO 5
int main()
{
    float sum = 0, res;
        
    float vetor[TAMANHO];

    printf("Digite os valores:\n");

    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%f", &vetor[i]);
        sum += vetor[i];
    }
    
    res = sum / TAMANHO;

    printf("Resultado = %.2f\n", res);

    return 0;
}*/
