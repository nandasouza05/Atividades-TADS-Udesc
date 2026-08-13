#include <stdio.h>

int main()
{
    float valor_inicial, valor_final, taxa_juros = 0.05;
    int anos = 3;

    printf("Qual o valor investido?\n");
    scanf("%f", &valor_inicial);

    valor_final = valor_inicial + (valor_inicial * taxa_juros * anos);

    printf("O valor ao final de %d anos sera de %.2f reais!\n", anos, valor_final);

    return 0;
}