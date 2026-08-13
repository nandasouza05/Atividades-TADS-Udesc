#include <stdio.h>

int verifica_primo(int x){
    int eh_primo = 1;
    for (int i = 2; i < x; i++)
    {
        if(x % i == 0){
            eh_primo = 0;
            break;
        }
    }
    return eh_primo;
}
int main()
{
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (verifica_primo(num))
    {
        printf("Eh primo!\n");
    }else{
        printf("Nao eh primo!\n");
    }
    return 0;
}
