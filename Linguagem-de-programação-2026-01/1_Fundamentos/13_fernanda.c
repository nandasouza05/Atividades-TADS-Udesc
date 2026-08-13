#include <stdio.h>

int main()
{
    int a, b, aux;

    printf("Digite o numero A : ");
    scanf("%d", &a);

    printf("Digite o numero B: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("A = %d\n", a);
    printf("B = %d", b);

    return 0;
}
