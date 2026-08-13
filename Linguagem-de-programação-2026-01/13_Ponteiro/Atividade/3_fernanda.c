#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v[5] = {100, 200, 300, 400, 500};
    int i = 2;
    printf("v - %p\n", v); //%p = imprimir o endereço, nesse caso da primeira posição de v
    printf("&v[0] - %p\n", &v[0]);//faz a mesma coisa que o anterior 
    printf("v + i - %p\n", v + i);//mostra o endereço de v[2]
    printf("*v + i - %d\n", *v + i);//valor de v[0] + 2
    printf("(*v) + i - %d\n", (*v) + i);//mesma coisa q o anterior
    printf("*(v + i) - %d\n", *(v + i));//aumenta a posição em dois = v[2]
    printf("*(v + (i + 2)) - %d\n", *(v + (i + 2)));//aumenta a posição em quatro = v[4]
    return 0;
}
