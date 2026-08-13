#include <stdio.h>

int meu_strcmp(char x[], char y[]){
    int i = 0;
    int igual = 1;
    while (x[i] != '\0')
    {
        if (x[i] != y[i])
        {
            igual = 0;
            break;
        }
        i++;
    }
    return igual;
}
int main(int argc, char const *argv[])
{
    char palavra_a[15];
    char palavra_b[15];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra_a);
    printf("Digite outra palavra:\n");
    scanf("%s", palavra_b);

    if (meu_strcmp(palavra_a, palavra_b))
    {
        printf("eh igual!\n");
    }else{
        printf("Nao eh igual!\n");
    }
    
    return 0;
}
