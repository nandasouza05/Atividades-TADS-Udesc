#include <stdio.h>
#define TAMANHO 3

int verifica_vetores(int x[], int y[]){
    int eh_igual = 1;
    for (int i = 0; i < TAMANHO; i++)
    {
        if (x[i] != y[i])
        {
            eh_igual = 0;
            break;
        }
    }
    return eh_igual;
}

int main()
{
    int vetor1[TAMANHO], vetor2[TAMANHO];

    printf("Digite os numeros:\n");

    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%d %d", &vetor1[i], &vetor2[i]);
    }
    

    if (verifica_vetores(vetor1, vetor2))
    {
        printf("Eh igual!\n");
    }else{
        printf("Nao eh igual!\n");
    }
    return 0;
}