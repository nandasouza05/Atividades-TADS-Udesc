#include <stdio.h>

int main()
{
    float fahrenheit, celcius;

    printf("Qual a temperatura em fahrenheits?\n");
    scanf("%f", &fahrenheit);

    celcius = (5 * (fahrenheit - 32))/ 9;

    printf("%.2fF equivalem a %.2fC",fahrenheit, celcius);
    
    return 0;
}
