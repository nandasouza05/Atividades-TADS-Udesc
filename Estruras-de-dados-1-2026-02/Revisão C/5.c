/* Run-length encoding (RLE) é uma forma simples de compressão de textos. A ideia
desta técnica é representar caracteres repetidos sucessivamente com um contador
seguido pelo caractere. Dada uma string, retorne o texto resultante da aplicação da
técnica RLE.
○ Exemplo, dada a string "AAAABBBCCDAA", a saída compactada deve ser "4A3B2C1D2A"*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char entrada[] = "AAAABBBCCDAA";
    char saida[20];
    int cont = 1;
    int j = 0;

    for (int i = 0; entrada[i] != '\0' ; i++)
    {
        if (entrada[i] == entrada[i+1])
        {
            cont++;
        }else{
            saida[j] = cont + '0';
            j++;
            saida[j] = entrada[i];
            j++;
        }
    }
    printf("%s", saida);
    return 0;
}
