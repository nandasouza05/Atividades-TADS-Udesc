#include <stdio.h>

int main()
{
    float cambio, qtd_dolares, qtd_real;

    printf("Qual o valor do cambio do dia?\n");
    scanf("%f", &cambio);

    printf("Qual a quantidade de dolares a ser convertida?\n");
    scanf("%f", &qtd_dolares);

    qtd_real = qtd_dolares * cambio;

    printf("Eh necessario %.2f reais para comprar %.2f dolares", qtd_real, qtd_dolares);

    return 0;
}
