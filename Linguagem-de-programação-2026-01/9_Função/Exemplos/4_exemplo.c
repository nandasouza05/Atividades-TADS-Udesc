#include <stdio.h>

float somar(float x, float y){
    float soma = x + y;
    return soma;
}

int main()
{
    float a, b, resultado;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &a, &b);
    printf("Soma: %.2f\n", resultado);
    return 0;
}
