#include <stdio.h>

int main()
{
    int vetorA[5], vetorB[5],vetorC[5];

    printf("Digite os valores A e B:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %d", &vetorA[i], &vetorB[i]);
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    printf("RESULTADOS:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("[%d] %d = %d + %d\n", i, vetorC[i], vetorA[i], vetorB[i]);
    }
    
    
    return 0;
}
