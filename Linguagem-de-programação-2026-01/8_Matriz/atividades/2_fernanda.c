/*2. Fa¸ca um programa que pe¸ca os valores inteiros para uma matriz 3x3 e pe¸ca ao
usu´ario qual o n´umero da linha que ele deseja ver os valores e mostre na tela
somente os valores dessa linha.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define L 3
#define C 3

int main()
{
    int matriz[L][C];
    int linha;
    srand(time(NULL));

    printf("Digite uma linha:\n");
    scanf("%d", &linha);

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
    
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

    /*printf("Digite uma linha:\n");
    scanf("%d", &linha);
    for (int j = 0; j < C; j++)
    {
        printf("[ %d ]", matriz[linha][j]);
    }*/
    

    
    return 0;
}