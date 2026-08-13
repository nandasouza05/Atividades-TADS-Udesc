#include <stdio.h>
#include <string.h>

int main()
{
    char nome_a[15] = "fernanda";
    char nome_b[15] = "gabriel";

    if (strcmp(nome_a, nome_b) == 0)
    {
        printf("Sao iguais!\n");
    }else{
        printf("Nao sao iguais!\n");
    }
    
    return 0;
}