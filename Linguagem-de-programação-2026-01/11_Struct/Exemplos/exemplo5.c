#include <stdio.h>
#include <string.h>

typedef struct
{
    char rua[20];
    int numero;
    char bairro[20];
}Endereco;

typedef struct
{
    char nome[20];
    int idade;
    Endereco endereco;
}Pessoa;

void inserir(Pessoa pessoas[], const int N, int i);
void visualizar(Pessoa pessoas[], const int N);
void buscar(Pessoa pessoas[], const int N);
void atualizar(Pessoa pessoas[], const int N);
void excluir(Pessoa pessoas[], const int N);
void inicializar(Pessoa pessoas[], const int N);

int main()
{
    const int N = 3;
    int indice = 0;
    Pessoa pessoas[N];
    inicializar(pessoas, N);
    inserir(pessoas, N, indice);
    visualizar(pessoas, N);
    buscar(pessoas, N);
    atualizar(pessoas, N);

    return 0;
}
void inicializar(Pessoa pessoas[], const int N){
    for (int i = 0; i < N; i++)
    {
        strcpy(pessoas[i].nome, "VAZIO");
    }
    
}
void inserir(Pessoa pessoas[], const int N, int i){
    printf("===========PESSOA=========\n");
    printf("Nome:\n");
    scanf("%s", pessoas[i].nome);
    printf("Idade:\n");
    scanf("%d", &pessoas[i].idade);
    printf("==========ENDERECO=========\n");
    printf("Rua:\n");
    scanf("%s", pessoas[i].endereco.rua);
    printf("Bairro:\n");
    scanf("%s", pessoas[i].endereco.bairro);
    printf("Numero:\n");
    scanf("%d", &pessoas[i].endereco.numero);
}
void visualizar(Pessoa pessoas[], const int N){
    system("cls");
    for (int i = 0; i < N; i++)
    {
        if (strcmp(pessoas[i].nome, "VAZIO") != 0)
        {
            printf("===========PESSOA[%d]=========\n", i+1);
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].idade);
            printf("==========ENDERECO[%d]=========\n", i+1);
            printf("Rua: %s\n", pessoas[i].endereco.rua);
            printf("Bairro: %s\n", pessoas[i].endereco.bairro);
            printf("Numero: %d\n", pessoas[i].endereco.numero);
        }
        
    }
}

void buscar(Pessoa pessoas[], const int N){
    system("cls");

    char nome_buscado[15];

    printf("Qual nome deseja visualizar?\n");
    scanf("%s", nome_buscado);

    for (int i = 0; i < N; i++)
    {
        if (strcmp(nome_buscado, pessoas[i].nome) == 0){
            printf("===========PESSOA[%d]=========\n", i+1);
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Idade: %d\n", pessoas[i].idade);
            printf("==========ENDERECO[%d]=========\n", i+1);
            printf("Rua: %s\n", pessoas[i].endereco.rua);
            printf("Bairro: %s\n", pessoas[i].endereco.bairro);
            printf("Numero: %d\n", pessoas[i].endereco.numero);
            break;
        }
    }
}

void atualizar(Pessoa pessoas[], const int N){
    system("cls");

    char nome_atualizado[15];

    printf("Qual nome deseja atualizar?\n");
    scanf("%s", nome_atualizado);

    for (int i = 0; i < N; i++)
    {
        if (strcmp(nome_atualizado, pessoas[i].nome) == 0){
            inserir(pessoas, N, i);
        }
    }
}