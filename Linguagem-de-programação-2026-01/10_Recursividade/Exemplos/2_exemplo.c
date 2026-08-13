#include <stdio.h>
int fatorial(int x);
int main()
{
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    printf("Fatorial: %d", fatorial(num));
    return 0;
}

int fatorial(int x){
    int fatorial = x;
    if(x <= 0)
        return 1;
    while (x != 1){
        x--;
        fatorial *= x;
    }
    return fatorial;
}
