#include <stdio.h>

#define SOMAR 1
#define SUBTRAIR 2
#define MULTIPLICAR 3
#define DIVIDIR 4
#define SAIR 5

int main()
{
    float num1, num2, resultado;
    int operacao;

    do
    {
        printf("1 - SOMA\n");
        printf("2 - SUBTRACAO\n");
        printf("3 - MULTIPLICACAO\n");
        printf("4 - DIVISAO\n");
        printf("5 - SAIR\n");
        scanf("%d", &operacao);


        if (operacao == SAIR)
        {
            printf("Saindo...\n");
            break;
        }
        
        printf("Digite dois numeros:\n");
        scanf("%f %f", &num1, &num2);

        switch (operacao)
        {
        case SOMAR:
            resultado = num1 + num2;
            break;
        case SUBTRAIR:
            resultado = num1 - num2;
            break;
        case MULTIPLICAR:
            resultado = num1 * num2;
            break;
        case DIVIDIR:
            if(num2 <= 0){
                printf("Nao e possivel por zero!\n");
                continue;
            }
            resultado = num1 / num2;
            break;
        
        default:
            printf("INVALIDO!");
            break;
        }
        printf("Resultado: %.2f\n", resultado);
    }while (operacao != 5);
    
    return 0;
}
