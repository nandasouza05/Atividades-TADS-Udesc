/*Números primos são os números naturais que têm apenas dois divisores distintos: 1 e
ele mesmo. Faça um programa que solicite um número natural, em seguida, informe o
número é primo ou não.
○ Exemplo 1, dado o termo 23, a saída esperada é sim.
○ Exemplo 2, dado o termo 77, a saída esperada é não*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int eh_primo = 1;
    int num;

    scanf("%d", &num);
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            eh_primo = 0;
            break;
        } 
    }
    if (eh_primo)
    {
        printf("Eh primo!\n");
    }else{
        printf("Nao eh!\n");
    }
    return 0;
}
