#ifndef PET_H
#define PET_H

#include <stdio.h>
#include <string.h>

#define VAZIO "VAZIO"

#define INSERIR 1
#define MOSTRAR 2

typedef struct{
    char nome[20];
    char telefone[15];
}Dono;

typedef struct{
    char nome[20];
    char especie[20];
    int idade;
    float peso;
    Dono dono;
}Pet;

void inicializar(Pet pet[], const int N);
void inserir(Pet pet[], const int N);
void mostrar(Pet pet[], const int N);

#endif