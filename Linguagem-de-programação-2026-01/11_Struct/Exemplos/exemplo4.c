#include <stdio.h>
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

int main()
{
    Pessoa p[3];

    for (int i = 0; i < 3; i++)
    {
        printf("===========PESSOA=========\n");
        printf("Nome:\n");
        scanf("%s", p[i].nome);
        printf("Idade:\n");
        scanf("%d", &p[i].idade);
        printf("==========ENDERECO=========\n");
        printf("Rua:\n");
        scanf("%s", p[i].endereco.rua);
        printf("Bairro:\n");
        scanf("%s", p[i].endereco.bairro);
        printf("Numero:\n");
        scanf("%d", &p[i].endereco.numero);
    }
    return 0;
}
