#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHA 3
#define COLUNA 3

int soma_matriz(int m[LINHA][COLUNA]){
    int sum = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            sum += m[i][j];
        }
        
    }
    return sum;
}
void mostrar_matriz(int m[LINHA][COLUNA]){
    for(int i= 0; i < LINHA;i++){
       for(int j = 0; j< COLUNA;j++){
            printf("[ %d ] ", m[i][j]);
       }
       printf("\n");
    }
}
int main()
{
    int matriz[LINHA][COLUNA];
    srand(time(NULL));

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = rand() % 10 + 1;
        }
    }
    mostrar_matriz(matriz);
    printf("Soma = %d", soma_matriz(matriz));
    return 0;
}
