#include <stdio.h>

int main()
{
    int incremento, fim;

    printf("Digite um valor para o incremento:\n");
    scanf("%d", &incremento);
    
    printf("Digite um valor para o fim do intervalo:\n");
    scanf("%d", &fim);

    for(int i = 0; i <= fim; i +=incremento){
        printf("%d\n", i);
    }
    return 0;
}
