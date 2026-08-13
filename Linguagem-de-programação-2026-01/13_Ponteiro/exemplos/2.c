#include <stdio.h>
// Crie uma variável do tipo int na função main.  
// Crie uma função que recebe um ponteiro para essa variável. 
// Incremente a variável usando ++; 
// Implemente a chamada da função criada na main. 
// Mostre o novo valor da variável na função main. 
void incrementar(int *px);

int main(){
    int x = 0;
    printf("X: %d\n", x);
    incrementar(&x);
    printf("X: %d\n", x);
    return 0;
}

void incrementar(int *px){
    (*px)++;
}