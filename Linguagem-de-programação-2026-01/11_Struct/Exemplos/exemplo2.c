#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[15];
    int idade;
    float salario;
}Pessoa;

int main()
{
    Pessoa p;
    
    printf("Nome:\n");
    scanf("%s", p.nome);

    printf("Idade:\n");
    scanf("%d", &p.idade);

    printf("Salario:\n");
    scanf("%f", &p.salario);

    printf("O %s tem %d anos e ganha %.2f reais\n", p.nome, p.idade, p.salario);

    return 0;
}
