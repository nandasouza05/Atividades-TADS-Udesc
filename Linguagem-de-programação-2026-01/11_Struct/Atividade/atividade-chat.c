#include <stdio.h>

typedef struct{
    char nome[50];
    int idade;
    float nota;
}Aluno;

void cadastrar(Aluno alunos[], const int N){
    for (int i = 0; i < N; i++)
    {
        printf("\nNOME: ");
        scanf("%s", alunos[i].nome);
        printf("\nIDADE: ");
        scanf("%d", &alunos[i].idade);
        printf("\nNOTA: ");
        scanf("%f", &alunos[i].nota);
    }
}

void listar(Aluno alunos[], const int N){
    for(int i = 0; i < N; i++){
        printf("\n------ALUNO [%d]------", i + 1);
        printf("\nNOME: %s", alunos[i].nome);
        printf("\nIDADE: %d", alunos[i].idade);
        printf("\nNOTA: %.2f", alunos[i].nota);
    }
}
void melhorAluno(Aluno alunos[], const int N){
    int melhor = 0;
    for (int i = 0; i < N; i++){
        if (alunos[melhor].nota < alunos[i].nota){
            melhor = i;
        }
    }
    printf("\n------MELHOR ALUNO------");
    printf("\nNOME: %s", alunos[melhor].nome);
    printf("\nIDADE: %d", alunos[melhor].idade);
    printf("\nNOTA: %.2f", alunos[melhor].nota);
    
}

float mediaNotas(Aluno alunos[], const int N){
    float sum = 0;
    float media;
    for (int i = 0; i < N; i++){
        sum += alunos[i].nota;
    }
    media = sum / N;
    return media;
}

int main()
{
    const int N = 2;
    Aluno alunos[N];
    
    cadastrar(alunos, N);
    listar(alunos, N);
    melhorAluno(alunos, N);
    printf("\n------MEDIA DOS ALUNOS------");
    printf("\nMedia: %.2f", mediaNotas(alunos, N));

    return 0;
}

