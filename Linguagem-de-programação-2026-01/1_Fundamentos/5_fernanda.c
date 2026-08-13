#include <stdio.h>

int main()
{
    int num1, num2, res;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    res = num1 + num2;

    printf("O resultado da soma eh: %d", res);
    
    return 0;
}

/*
#include <stdio.h>

int main()
{
    float num1, num2, res;

    printf("Digite dois numeros:\n");
    scanf("%f %f", &num1, &num2);

    res = num1 + num2;

    printf("O resultado da soma eh: %.2f", res);
    
    return 0;
}
*/