#include "pet.h"

void inicializar(Pet pet[], const int N){
    for(int i = 0; i < N; i++){
        strcpy(pet[i].nome, VAZIO);
    }
}
void inserir(Pet pet[], const int N){
    for (int i = 0; i < N; i++)
    {
        printf("Digite o nome do seu pet:\n");
        scanf("%s", pet[i].nome);
        printf("Qual a especie do seu pet?:\n");
        scanf("%s", pet[i].especie);
        printf("Digite a idade dele:\n");
        scanf("%d", &pet[i].idade);
        printf("Digite o peso dele:\n");
        scanf("%f", &pet[i].peso);
        printf("Qual o nome do dono?\n");
        scanf("%s", pet[i].dono.nome);
        printf("Telefone para contato:\n");
        scanf("%s", pet[i].dono.telefone);
    }
}
void mostrar(Pet pet[], const int N){
    for(int i = 0; i < N; i++){
        if(strcmp(pet[i].nome, VAZIO) != 0){
            printf("-----------[PET %d]-----------\n", i+1);
            printf("Nome: %s\n", pet[i].nome);
            printf("Especie: %s\n", pet[i].especie);
            printf("Idade: %d\n", pet[i].idade);
            printf("Peso: %.2f\n", pet[i].peso);
            printf("-------[DONO DO PET %d]-------\n", i+1);
            printf("Nome do dono: %s\n", pet[i].dono.nome);
            printf("Telefone: %s\n", pet[i].dono.telefone);
        }
    }
}