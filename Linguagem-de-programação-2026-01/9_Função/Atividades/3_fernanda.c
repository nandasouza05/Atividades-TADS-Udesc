#include <stdio.h>

void meu_strcpy(char x[], char y[]){
    int i = 0;
    while (x[i] != '\0')
    {
        y[i] = x[i];
        i++;
    }
    y[i] = '\0';
}

int main()
{
    char palavra[15];
    char palavra_copiada[15];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    meu_strcpy(palavra, palavra_copiada);

    printf("%s", palavra_copiada);

    return 0;
}
