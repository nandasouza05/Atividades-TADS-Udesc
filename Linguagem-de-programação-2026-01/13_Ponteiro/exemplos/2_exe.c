#include <stdio.h>

void preencher(float *vetor, const int N){
    for (int i = 0; i < N; i++)
    {
        printf("Digite um numero:\n");
        scanf("%f", &vetor[i]);
    }
    
}

int main()
{
    float vet[5];
    preencher(vet, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("[%.2f]-", vet[i]);
    }
    
    return 0;
}
