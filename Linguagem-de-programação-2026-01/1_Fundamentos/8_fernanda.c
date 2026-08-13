#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
    float volume, raio, altura;

    printf("Qual o raio da lata?\n");
    scanf("%f", &raio);

    printf("Qual a altura da lata?\n");
    scanf("%f", &altura);

    volume = PI * pow(raio, 2) * altura;

    printf("O volume eh: %.2f", volume);
    
    return 0;
}

/*
#include <stdio.h>
#include <math.h>

int main()
{
    float volume, raio, altura;
    const float PI = 3.14; // MELHOR POR CONTA DO TIPO

    printf("Qual o raio da lata?\n");
    scanf("%f", &raio);

    printf("Qual a altura da lata?\n");
    scanf("%f", &altura);

    volume = PI * pow(raio, 2) * altura;

    printf("O volume eh: %.2f", volume);
    
    return 0;
}
*/

/*Biblioteca math.h tem o M_PI que ja é uma constante de com o valor pi*/