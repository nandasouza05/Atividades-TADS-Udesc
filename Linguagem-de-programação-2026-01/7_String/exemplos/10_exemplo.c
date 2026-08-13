#include <stdio.h>
#include <string.h>

int main()
{
    char nome[30] = "fernanda ";
    char sobrenome[15] = "fernandes";

    int tamanho_nome = strlen(nome);

    int i = 0;
    int j = tamanho_nome;

    while (sobrenome [i] != '\0')
    {
        nome[j] = sobrenome[i];
        i++;
        j++;
    }
    nome[j] = '\0';
    
    printf("Nome: %s\n", nome);
    
    return 0;
}