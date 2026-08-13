#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[10];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    int tamanho = 0;
    while (palavra[tamanho] != '\0')
        tamanho++; 
    
    //int tamanho = strlen(palavra);

    int inicio = 0;
    int fim = tamanho - 1;
    int eh_palindromo = 1;

    while (inicio < fim)
    {
        if (palavra[inicio] == palavra[fim])
        {
            inicio++;
            fim--;
        }else{
            eh_palindromo = 0;
            break;
        }  
    }
    if (eh_palindromo)
    {
        printf("Eh um palindromo!");
    }else{
        printf("Nao eh um palindromo!");
    }
    return 0;
}
