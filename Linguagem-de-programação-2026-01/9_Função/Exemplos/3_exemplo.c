#include <stdio.h>

void somar_mostrar(float x, float y){
    printf("Soma: %.2f\n", x + y);
}

int main()
{
    float a, b;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &a, &b);
    somar_mostrar(a,b);
    return 0;
}
