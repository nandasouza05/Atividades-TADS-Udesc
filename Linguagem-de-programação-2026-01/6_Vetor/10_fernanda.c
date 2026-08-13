#include <stdio.h>

int main()
{
    int vetor[20], num, sum = 0, encontrado = 0;

    printf("Digite os numeros:\n");

    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Escolha um numero:\n");
    scanf("%d", &num);

    for (int i = 0; i < 20; i++)
    {
        if (num == vetor[i])
        {
            sum++;
            encontrado = 1;

        }
    }
    if (encontrado == 1)
    {
        printf("O NUMERO APARECEU %d VEZES NO VETOR\n", sum);
    }else{
        printf("NAO APARECE\n");
    }
    
    
    return 0;
}
