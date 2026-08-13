#include <stdio.h>

int palindromo(char x[]){
    int i = 0;
    int j = 0;
    int eh_palindromo = 1;

    while (x[i] != '\0')
        i++;
    i--;
    while (j < i)
    {
        if (x[j] == x[i])
        {
            j++;
            i--;
        }else{
            eh_palindromo = 0;
            break;
        }
    }
    return eh_palindromo;
}

int main()
{
    char palavra[15];
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    if (palindromo(palavra))
    {
        printf("Eh palindromo!\n");
    }else{
        printf("Nao eh palindromo!\n");
    }
    return 0;
}
