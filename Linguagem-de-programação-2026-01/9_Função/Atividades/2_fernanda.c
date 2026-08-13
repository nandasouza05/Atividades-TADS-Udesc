#include <stdio.h>

void meu_strcat(char x[], char y[]){
    int i = 0;
    int j = 0;
    while (x[i] != '\0')
        i++;
    
    while (y[j] != '\0')
    {
        x[i] = y[j];
        i++;
        j++;
    }
    x[i] = '\0';
}

int main()
{
    char destino[15], origem[15];

    printf("Digite uma palavra:\n");
    scanf("%s", destino);

    printf("Digite outra palavra:\n");
    scanf("%s", origem);

    meu_strcat(destino, origem);

    printf("JUNTAS = %s", destino);

    return 0;
}
