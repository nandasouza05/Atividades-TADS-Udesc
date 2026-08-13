#include <stdio.h>

int main()
{
    int ano;
    
    printf("Digite um ano:\n");
    scanf("%d", &ano);

    if (ano < 1000 || ano > 9999)
    {
        printf("Informe um ano de 4 digitos!\n");
    }else if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
    {
        printf("Esse ano eh bissexto!\n");
    }else{
        printf("Esse ano nao eh bissexto!\n");
    }
    return 0;
}
