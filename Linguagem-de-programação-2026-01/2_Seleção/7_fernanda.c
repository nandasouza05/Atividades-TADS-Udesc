#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Digite os tres lados do tringulo:\n");
    scanf("%d %d %d", &x, &y, &z);

    if (((x + y) > z) ||
    ((x + z) > y) ||
    ((y + z) > x))
    {
        if (x == y && y == z)
        {
            printf("Esse eh um triangulo equilatero!");
        }else if (x == y || x == z || y == z)
        {
            printf("Esse eh um triangulo isosceles!");
        }else if (x != y && y != z && x != z)
        {
            printf("Esse eh um triangulo escaleno!");
        }
    }else{
        printf("Nao eh triangulo!");
    }
    
    return 0;
}

/*#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Digite os tres lados do tringulo:\n");
    scanf("%d %d %d", &x, &y, &z);

    if (x == y && y == z)
    {
        printf("Esse eh um triangulo equilatero!");
    }else if (x == y || x == z || y == z)
    {
        printf("Esse eh um triangulo isosceles!");
    }else if (x != y && y != z && x != z)
    {
        printf("Esse eh um triangulo escaleno!");
    }
    return 0;
}*/
