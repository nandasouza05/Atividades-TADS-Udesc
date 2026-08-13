#include <stdio.h>

int main()
{
    char nome[15];

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    int i = 0;
    while (nome[i] != '\0')
        i++; //  Não precisa de {} pq é apenas uma linha de code!!

    printf("Total de caracteres: %d\n", i);

    
    
    return 0;
}