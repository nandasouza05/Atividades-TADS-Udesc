#include <stdio.h>
// Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. 
// Associe as variaveis aos ponteiros (use &). 
// Modifique os valores de cada variável usando os ponteiros. 
// Imprima os valores das variáveis antes e após a modificação. 
int main(){
    int i;
    float f;
    char c;
    double d;

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;
    double *pd = &d;

    // i = 1;
    // f = 1.5;
    // c = 'a';
    // d = 1.132456;

    *pi = 1;
    *pf = 1.5;
    *pc = 'a';
    *pd = 1.132456;

    printf("I: %d\n", i);
    printf("F: %.2f\n", f);
    printf("C: %c\n", c);
    printf("D: %lf\n", d);
}