#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, soma, subtracao, multiplicacao, divisao, exponencial, resto;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    exponencial = pow(num1, num2);
    resto = num1 % num2;

    printf("%d + %d = %d\n",num1, num2, soma);
    printf("%d - %d = %d\n",num1, num2, subtracao);
    printf("%d * %d = %d\n",num1, num2, multiplicacao);
    printf("%d / %d = %d\n",num1, num2, divisao);
    printf("%d ^ %d = %d\n",num1, num2, exponencial);
    printf("O resto de %d e %d = %d\n",num1, num2, resto);

    return 0;
}
