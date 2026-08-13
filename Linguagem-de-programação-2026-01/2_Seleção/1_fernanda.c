#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if(num >= 0){
        printf("Eh positivo!");
    }else{
        printf("Eh negativo!");
    }
    return 0;
}
