#include <stdio.h>
#include <string.h> 

int main()
{
    char nome[15];

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    int total_crt = strlen(nome); //Vem da biblioteca de string

    printf("Total de caracteres: %d\n", total_crt);

    
    
    return 0;
}