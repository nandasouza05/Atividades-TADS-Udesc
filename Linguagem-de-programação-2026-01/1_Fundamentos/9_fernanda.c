#include <stdio.h>

int main()
{
    float valor_compra, representante, imposto, valor_venda;

    printf("Digite o valor de compra: ");
    scanf("%f", &valor_compra);

    representante = valor_compra * 0.20;

    imposto = valor_compra * 0.30,

    valor_venda = valor_compra + representante + imposto;

    printf("O valor total de venda ficou de %.2f reais!", valor_venda);

    return 0;
}
