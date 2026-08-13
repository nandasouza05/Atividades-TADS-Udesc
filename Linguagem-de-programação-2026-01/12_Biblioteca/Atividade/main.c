#include <stdio.h>
#include "pet.h"

int main()
{
    const int N = 2;
    Pet pet[N];
    inicializar(pet, N);
    inserir(pet, N);
    mostrar(pet, N);

    return 0;
}