#include <stdio.h>

int main()
{
    char nome_a[15] = "fernanda";
    char nome_b[15] = "gabriel";

    int i = 0;
    int eh_igual = 1; 

    while(nome_a[i] != '\0'){
        if (nome_a[i] != nome_b[i])
        {
            eh_igual = 0;
            break;
        }
        i++;
    }

    if (eh_igual)
    {
        printf("Sao iguais!\n");
    }else{
        printf("Nao sao iguais!\n");
    }
    
    return 0;
}