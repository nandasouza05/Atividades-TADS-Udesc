//Cópia de string
#include <stdio.h>

int main()
{
    char nome_origem[15];
    char nome_destino[15];

    printf("Digite seu nome:\n");
    scanf("%s", nome_origem);

    int i = 0;
    while (nome_origem[i] != '\0')
    {
        nome_destino[i] = nome_origem[i];
        i++;
    }
    
    printf("Nome de origem: %s\n", nome_origem);
    printf("Nome de destino: %s\n", nome_destino);
    
    return 0;
}