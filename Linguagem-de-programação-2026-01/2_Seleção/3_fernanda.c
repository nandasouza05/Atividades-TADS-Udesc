/*#include <stdio.h>

int main()
{
    int numero_macas;
    float custo_macas;

    printf("Digite o numero de macas:\n");
    scanf("%d", &numero_macas);

    if(numero_macas >= 12){
        custo_macas = numero_macas * 1.95;
        printf("O valor das macas eh: %.2f", custo_macas);
    }else{
        custo_macas = numero_macas * 2.30;
        printf("O valor das macas eh: %.2f", custo_macas);
    }
    return 0;
}*/

#include <stdio.h>

int main()
{
    int numero_macas;
    float custo_macas;
    const float VALOR_UNIDADE = 2.30;
    const float VALOR_DUZIA = 1.95;

    printf("Digite o numero de macas:\n");
    scanf("%d", &numero_macas);

    if(numero_macas >= 12){
        custo_macas = numero_macas * VALOR_DUZIA;
        printf("O valor das macas eh: %.2f", custo_macas);
    }else{
        custo_macas = numero_macas * VALOR_UNIDADE;
        printf("O valor das macas eh: %.2f", custo_macas);
    }
    return 0;
}
