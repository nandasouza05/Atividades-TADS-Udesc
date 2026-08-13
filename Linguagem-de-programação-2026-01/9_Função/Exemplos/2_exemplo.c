#include <stdio.h>

void ler_somar_mostrar(){
    float a, b;
    printf("Digite dois numeros:\n");
    scanf("%f %f", &a, &b);
    printf("Soma: %.2f\n", a + b);
}

int main()
{
    ler_somar_mostrar();
    return 0;
}
