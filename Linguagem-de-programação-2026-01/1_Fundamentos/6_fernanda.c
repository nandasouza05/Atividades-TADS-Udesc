#include <stdio.h>

int main()
{
    int num, antecessor, sucessor;

    printf("Digite um numero: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("O numero informado foi %d, o antecessor eh %d e o sucessor eh %d", num, antecessor, sucessor);
    
    return 0;
}
