/*1. Fa¸ca um programa que pe¸ca os valores de uma matriz 2x3 e ao final, mostre na tela
o total da soma de todos os elementos dessa matriz.*/

#include <stdio.h>
#include <time.h>

int main()
{
    int matriz[2][3];
    int sum = 0;
    srand(time(NULL));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 10 + 1;
            sum += matriz[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d]", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma: %d", sum);
    
    return 0;
}
