#include <stdio.h>
#include "calculadora.h"

int main()
{
    float x, y;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &x, &y);

    float resultado = somar(x,y);
    printf("Resultado: %.2f", resultado);
    return 0;
}
