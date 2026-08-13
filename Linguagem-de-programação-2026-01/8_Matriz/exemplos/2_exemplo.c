#include <stdio.h>

int main()
{
    char nomes_alunos[5][20];

    for (int i = 0; i < 5; i++)
    {
        scanf("%s", nomes_alunos[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("[%s]\n", nomes_alunos[i]);
    }
    
    return 0;
}
