#include <stdio.h>

int verifica_par_impar(int x){

    int eh_par = 1;
    
    if (x % 2 != 0)
    {
        eh_par = 0;
    }
    return eh_par;
}
/*int verifica_par_impar(int x){
    if (x % 2 == 0)
    {
        return 1;
    }
    return 0;
}*/

/*int verifica_par_impar(int x){
    return ((numero % 2)== 0);
}*/
int main()
{
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);

    if (verifica_par_impar(num))
    {
        printf("Eh par!\n");
    }else{
        printf("Nao eh par!\n");
    }
    
    return 0;
}
