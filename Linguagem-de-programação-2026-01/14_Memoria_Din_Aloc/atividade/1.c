#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tamanho);
    
    int *vetor = malloc(sizeof(int) * tamanho);
    //vetor[tamanho]

    printf("Preencha o vetor 1:\n");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < tamanho; i++){
        printf("[ %d ] ", vetor[i]);
    }
    printf("\n");

    printf("Qual o novo tamanho do vetor?\n");
    scanf("%d", &tamanho);

    vetor = realloc(vetor, sizeof(int) * tamanho);

    printf("Preecha o vetor 2:\n");
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < tamanho; i++){
        printf("[ %d ] ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}
