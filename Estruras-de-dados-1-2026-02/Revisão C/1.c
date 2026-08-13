/*Dado um vetor de números inteiros v de tamanho n e um número k, retorne verdadeiro
se a soma de qualquer par de números em v for igual a k.
○ Exemplo: dado v = [10,15,3,7] e k = 17, a saída deve ser true, pois 10 + 7 é 17*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v[] = {1,2,4,6,7};
    int k = 81, encontrado = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (v[i] + v[j] == k)
            {
                encontrado = 1;
                break;
            }
        }
    }
    if (encontrado)
    {
        printf("Existe\n");
    }else{
        printf("Nao existe!");
    }
    
    return 0;
}
