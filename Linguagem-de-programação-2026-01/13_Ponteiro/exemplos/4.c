//Compile e execute para melhor compreensão!
#include <stdio.h>
#include <stdlib.h>
#define LINHA 6
#define COLUNA 6
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[38;5;18m"
#define MAGENTA "\033[38;5;129m"
#define CYAN "\033[36m"
#define WHITE "\033[38;5;208m"
#define GRAY "\033[38;5;213m"
#define PURPLE "\033[95m"
#define LIGHTC "\033[96m"
#define RESET "\033[0m"

void inicializar_matriz(int **m, int valores[LINHA][COLUNA]);
int **alocar_matriz(int linhas, int colunas);
void liberar_matriz(int **m);
void imprimir_valores_matriz(int **m, int i);
void imprimir_vetor_ponteiros(int **m, void *res2, void *res3);
void imprimir_enderecos_vetor(int **m, void *res1, void *res7);
void imprimir_enderecos_matriz(int **m, void *res4, void *res10);
void imprimir_respostas(
    void *res1, void *res2, void *res3, void *res4,
    int res5, int res6, void *res7, int res8, int res9, void *res10);
void reinicializar(int **m, int ***p, int *i);

int main(void) {
    int valores[LINHA][COLUNA] = {
        {3,1,4,5,6,-1},
        {9,8,7,6,5,-1},
        {2,5,2,0,-1,-1},
        {0,1,2,3,4,-1},
        {0,1,0,6,4,8},
        {7,9,8,0,-1,-1}
    };

    int **m = alocar_matriz(LINHA, COLUNA);
    inicializar_matriz(m, valores);

    int **p = m;
    int i = 3;

    void *res1 = p + 1;

    reinicializar(m, &p, &i);
    int *res2 = p[i + 2];

    reinicializar(m, &p, &i);
    int *res3 = *(p + 4);

    reinicializar(m, &p, &i);
    int *res4 = *(p + 2) + 4;

    reinicializar(m, &p, &i);
    int res5 = p[i + 1][3];

    reinicializar(m, &p, &i);
    int res6 = *(p[i] + 1);

    reinicializar(m, &p, &i);
    void *res7 = &p[i + 1];

    reinicializar(m, &p, &i);
    int res8 = *(*(p + 4) + i);

    reinicializar(m, &p, &i);
    int res9 = p[i][i];

    reinicializar(m, &p, &i);
    void *res10 = &p[i + 2][i + 1];

    printf("VALOR DO PONTEIRO PARA PONTEIRO: \n[ %p]\n", &p);
    imprimir_valores_matriz(m, i);
    imprimir_vetor_ponteiros(m, res2, res3);
    imprimir_enderecos_vetor(m, res1, res7);
    imprimir_enderecos_matriz(m, res4, res10);
    imprimir_respostas(res1, res2, res3, res4, res5, res6, res7, res8, res9, res10);

    liberar_matriz(m);
    return 0;
}

void inicializar_matriz(int **m, int valores[LINHA][COLUNA]) {
    for (int i = 0; i < LINHA; i++)
        for (int j = 0; j < COLUNA; j++)
            m[i][j] = valores[i][j];
}

int **alocar_matriz(int linhas, int colunas) {
    int **m = malloc(sizeof(int *) * linhas);
    for (int i = 0; i < linhas; i++)
        m[i] = malloc(sizeof(int) * colunas);
    return m;
}


void liberar_matriz(int **m)
{
    for (int i = 0; i < LINHA; i++)
        free(m[i]);
    free(m);
}

void imprimir_valores_matriz(int **m, int i)
{
    printf("VALORES DE CADA CELULA DA MATRIZ:\n");
    for (int x = 0; x < LINHA; x++)
    {
        for (int y = 0; y < COLUNA; y++)
        {
            if (m[x][y] == -1)
            {
                printf("[ NULL ]");
            }
            else
            {
                if ((x == (i + 1) && y == 3)) // res5
                    printf(MAGENTA "[%5d ]" RESET, m[x][y]);
                else if ((x == i && y == 1)) // res6
                    printf(CYAN "[%5d ]" RESET, m[x][y]);
                else if ((x == 4 && y == i)) // res8
                    printf(GRAY "[%5d ]" RESET, m[x][y]);
                else if ((x == i && y == i)) // res9
                    printf(PURPLE "[%5d ]" RESET, m[x][y]);
                else
                    printf("[ %4d ]", m[x][y]);
            }
        }
        printf("\n");
    }
}

void imprimir_vetor_ponteiros(int **m, void *res2, void *res3)
{
    printf("VALORES DO VETOR DE ENDEREÇOS PARA VETORES:\n");
    for (int x = 0; x < LINHA; x++)
    {
        if (m[x] == res2)
            printf(GREEN "[ %p ]" RESET "\n", (void *)m[x]);
        else if (m[x] == res3)
            printf(YELLOW "[ %p ]" RESET "\n", (void *)m[x]);
        else
            printf("[ %p ]\n", (void *)m[x]);
    }
}

void imprimir_enderecos_vetor(int **m, void *res1, void *res7)
{
    printf("\nENDEREÇOS DO VETOR DE ENDEREÇOS PARA VETORES:\n");
    for (int x = 0; x < LINHA; x++)
    {
        if ((void *)(m + x) == res1)
            printf(RED "[ %p ]" RESET "\n", (void *)(m + x));
        else if ((void *)(m + x) == res7)
            printf(WHITE "[ %p ]" RESET "\n", (void *)(m + x));
        else
            printf("[ %p ]\n", (void *)(m + x));
    }
}

void imprimir_enderecos_matriz(int **m, void *res4, void *res10)
{
    printf("\nENDERECOS DE CADA CELULA NA MATRIZ:\n");
    for (int x = 0; x < LINHA; x++)
    {
        for (int y = 0; y < COLUNA; y++)
        {
            if (m[x][y] == -1)
                printf("[      NULL      ]");
            else if (&m[x][y] == res4)
                printf(BLUE "[ %p ]" RESET, (void *)&m[x][y]);
            else if (&m[x][y] == res10)
                printf(LIGHTC "[ %p ]" RESET, (void *)&m[x][y]);
            else
                printf("[ %p ]", (void *)&m[x][y]);
        }
        printf("\n");
    }
}

void imprimir_respostas(
    void *res1, void *res2, void *res3, void *res4,
    int res5, int res6, void *res7, int res8, int res9, void *res10)
{
    printf("RESPOSTAS:\n");
    printf(RED "1  - p + 1                : %p\n" RESET, res1);
    printf(GREEN "2  - p[i + 2]             : %p\n" RESET, res2);
    printf(YELLOW "3  - *(p + 4)             : %p\n" RESET, res3);
    printf(BLUE "4  - *(p + 2) + 4         : %p\n" RESET, res4);
    printf(MAGENTA "5  - p[i + 1][3]          : %d\n" RESET, res5);
    printf(CYAN "6  - *(p[i] + 1)          : %d\n" RESET, res6);
    printf(WHITE "7  - &p[i + 1]            : %p\n" RESET, res7);
    printf(GRAY "8  - *(*(p + 4) + i)      : %d\n" RESET, res8);
    printf(PURPLE "9  - p[i][i]              : %d\n" RESET, res9);
    printf(LIGHTC "10 - &p[i + 2][i + 1]     : %p\n" RESET, res10);
}
void reinicializar(int **m, int ***p, int *i)
{
    *p = m;
    *i = 3;
}
