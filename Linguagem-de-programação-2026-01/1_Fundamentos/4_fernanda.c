#include <stdio.h>

int main()
{
    int idade;
    float peso;
    char tipo;

    printf ("Qual a idade do seu pet?\n");
    scanf("%d", &idade);

    printf("Qual o peso do seu pet?\n");
    scanf("%f", &peso);

    printf("Se ele for um cachorro digite c e se for um gato digite g : \n");
    scanf(" %c", &tipo);

    printf("Idade: %d anos\n", idade);
    printf("Peso: %.2f kg\n", peso);
    printf("Eh um : %c\n", tipo);
    
    return 0;
}
