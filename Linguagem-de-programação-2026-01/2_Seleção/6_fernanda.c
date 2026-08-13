#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Digite tres numeros:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d eh maior que %d e %d", num1, num2, num3);
    }else if (num2 > num1 && num2 > num3)
    {
        printf("%d eh maior que %d e %d", num2, num1, num3);
    }else if (num3 > num1 && num3 > num2)
    {
        printf("%d eh maior que %d e %d", num3, num1, num2);
    }
    
    
    return 0;
}