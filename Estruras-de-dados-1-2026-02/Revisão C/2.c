/*Dado um vetor de números inteiros v, retorne um novo vetor de forma que cada
elemento no índice i seja o produto de todos os números na matriz original, com
exceção de i.
○ Exemplo 1: dado v = [1,2,3,4,5], a saída esperada é [120,60,40,30,24]
○ Exemplo 2: dado v = [3,2,1], a saída esperada é [2,3,6]
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v[5] = {1,2,3,4,5};
    int v2[5];

    for (int i = 0; i < 5; i++)
    {
        int produto = 1;
        for (int j = 0; j < 5; j++)
        {
            if (i != j)
            {
                produto *= v[j];
            }
        }
        v2[i] = produto;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("[%d]", v2[i]);
    }  
    return 0;
}
