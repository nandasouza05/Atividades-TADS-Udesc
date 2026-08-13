#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade:\n");
    scanf("%d", &idade);

    if(idade < 18){
        printf("Nao eleitor");
    }else if (idade > 65)
    {
        printf("Eleitor facultativo");
    }else
        printf("Eleitor obrigatorio");
    return 0;
}
