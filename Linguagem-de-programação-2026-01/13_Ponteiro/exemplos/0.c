#include <stdio.h>

/*Crie um função chamada swap() que recebe dois ponteiros para int.
A função deve trocar os valores entre as variáveis apontadas pelo ponteiro.
Na main mostre os valores originais.
Chamar a função swap().
Na main mostre os valores trocados.*/

void swap(int *ptr_a, int * ptr_b);

int main(){
    int a = 10, b = 20;
    printf("ANTES: A: %d | B: %d\n", a, b);
    swap(&a, &b);
    printf("DEPOIS: A: %d | B: %d\n", a, b);
    return 0;

}
void swap(int *ptr_a, int * ptr_b){
    int tmp = *ptr_a;
    *ptr_a = *ptr_b; 
    *ptr_b = tmp;
}