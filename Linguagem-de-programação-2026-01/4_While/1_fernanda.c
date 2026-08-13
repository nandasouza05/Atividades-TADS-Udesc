#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        while (num1 > num2)
        {
            num2++;
            printf("%d  %d\n", num1, num2);
        }
        
    }else if (num2 > num1)
    {
        while (num2 > num1)
        {
            num1++;
            printf("%d  %d\n", num1, num2);
        }
        
    }else{
        printf("Sao iguais");
    }
    return 0;
}

/*Forma da prof mari*/

/*    while (num1 != num2)
    {
        if (num1 > num2)
        {
            num1++;
        }else{
            num2--;
        }
        
    }
        
    OU 

    while (num1 != num2)
    {
        num1 = (num1 > num2) ? num2++ : num1--;
    
    }

    */
    
