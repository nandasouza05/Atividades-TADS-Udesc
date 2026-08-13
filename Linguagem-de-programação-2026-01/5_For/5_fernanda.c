#include <stdio.h>
#include <math.h>
#define MINIMO -999999

int main()
{
    int numero, atual_maior = MINIMO;
    
    for(int i = 0; i < 10; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &numero);  
        
        if(numero > atual_maior){
            atual_maior = numero;
        }
    }
    printf("Maior:%d\n", atual_maior);
    return 0;
}
