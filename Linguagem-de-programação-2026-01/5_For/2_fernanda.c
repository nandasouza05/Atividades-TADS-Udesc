#include <stdio.h>

int main()
{
    int num;
    int total_par = 0, total_impar = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &num);  
        
        if(num % 2 == 0){
            total_par++;
        }else{
            total_impar++;
        }
    }
    printf("%d numero sao par e %d sao impar!\n", total_par, total_impar);
    
    return 0;
}
