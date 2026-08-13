//Cópia de string
#include <stdio.h>

int main()
{
    char nome_origem[15];
    char nome_destino[15];

    printf("Digite seu nome:\n");
    scanf("%s", nome_origem);

    strcpy(nome_destino, nome_origem);
    
    printf("Nome de origem: %s\n", nome_origem);
    printf("Nome de destino: %s\n", nome_destino);
    
    return 0;
}