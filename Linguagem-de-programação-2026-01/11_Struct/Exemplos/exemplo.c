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
    Pessoa fulana;
    fulana.idade = 20;
    fulana.salario = 806,70;
    strcpy(fulana.nome, "fulana");

    return 0;
}
