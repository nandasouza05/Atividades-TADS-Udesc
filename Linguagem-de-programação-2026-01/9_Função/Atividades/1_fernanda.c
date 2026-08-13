#include <stdio.h>

int meu_strlen(char x[]){
    int i = 0;
    while (x[i] != '\0')
        i++;
    return i;
}

int main()
{
    char nome[15];

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    //int tamanho = meu_strlen(nome);

    //printf("TAMANHO = %d", tamanho);

    printf("TAMANHO = %d", meu_strlen(nome));

    return 0;
}
