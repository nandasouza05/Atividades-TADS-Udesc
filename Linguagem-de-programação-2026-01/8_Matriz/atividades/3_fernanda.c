/*Em uma matriz 4x4 preenchida com valores inteiros, mostre na tela:
• A soma de todos os elementos das linhas pares;
• O valor do primeiro elemento da matriz e do ´ultimo;
• A soma dos elementos da linha 2;
• Mostre somente os elementos da Diagonal Principal;
• O maior valor e sua posi¸c˜ao na matriz;
• O menor valor e sua posi¸c˜ao na matriz.*/

#include <stdio.h>
#include <time.h>
#define L 4
#define C 4

int main()
{
    int matriz[L][C];
    int linha;
    int sum = 0;
    srand(time(NULL));

    printf("Digite uma linha:\n");
    scanf("%d", &linha);

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = rand() % 10 + 1;
            if (i % 2 == 0)
            {
                sum += matriz[i][j];
            }
            
            sum += matriz[i][j];
        }
    }
    int maior[0][0];
    int menor[0][0];
    
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (i == linha - 1)
            {
                printf("[%d]", matriz[i][j]);
            }
        }
        printf("\n");
    }

    printf("Soma: %d", sum);
    printf("Primeiro: %d\nUltimo: %d", matriz[0][0], matriz[4][4]);

    return 0;
}