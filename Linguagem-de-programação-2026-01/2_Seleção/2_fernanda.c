#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Eh par!");
    }else{
        printf("Eh impar!");
    }
    return 0;
}
