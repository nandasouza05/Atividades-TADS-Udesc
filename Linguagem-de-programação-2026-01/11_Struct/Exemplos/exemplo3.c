#include <stdio.h>

typedef struct
{
    char nome[20];
    int idade;
}Pessoa;

int main()
{
    Pessoa p[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Nome:\n");
        scanf("%s", p[i].nome);
        printf("Idade:\n");
        scanf("%d", &p[i].idade);
        printf("===========================\n");
    }
    return 0;
}
