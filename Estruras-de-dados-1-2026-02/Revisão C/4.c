/*Dado uma matriz quadrada m de números inteiros e de tamanho n, calcule a soma das
diagonais principal e secundária.
○ Exemplo, dado
m = [
[1, 2, 3, 4],
[4, 3, 2, 1],
[7, 8, 9, 6],
[6, 5, 4, 3]
], a saída esperada é 16 e 20*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4] = {
    {1, 2, 3, 4},
    {4, 3, 2, 1},
    {7, 8, 9, 6},
    {6, 5, 4, 3}
    }; 
    int sum_principal = 0;
    int sum_secundaria = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                sum_principal += matriz[i][j];
            }
            if (i + j == 3)
            {
                sum_secundaria += matriz[i][j];
            }
        }
    }
    printf("Principal: %d\n", sum_principal);
    printf("Secundaria %d\n", sum_secundaria);
    return 0;
}

