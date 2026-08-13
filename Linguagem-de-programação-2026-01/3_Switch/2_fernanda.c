#include <stdio.h>

int main()
{
    char categoria,subcategoria;

    printf("Opcoes para assistir!\n");
    printf("[F] Filme\n");
    printf("[S] Serie\n");
    printf("[D] Documentario\n");
    printf("O que voce quer assistir?\n");
    scanf(" %c", &categoria);
    
    switch (categoria)
    {
        case 'f':
        case 'F':
            printf("[S] Suspense\n");
            printf("[A] Acao\n");
            printf("Selecione uma opcao:\n");
            scanf(" %c", &subcategoria);
            
            switch (subcategoria)
            {
                case 's':
                case 'S':
                    printf("A orfa");
                break;
                case 'a':
                case 'A':
                    printf("Batman: O cavaleiro das trevas");
                break;
                default:
                    printf("Invalido!\n");
                break;
            }
        break;
        case 's':
        case 'S':
            printf("[D] Drama\n");
            printf("[C] Comedia\n");
            printf("Selecione uma opcao:\n");
            scanf(" %c", &subcategoria);
            
            switch (subcategoria)
            {
                case 'd':
                case 'D':
                    printf("Revenge");
                break;
                case 'c':
                case 'C':
                    printf("How I met your mother");
                break;
                default:
                    printf("Invalido!\n");
                break;
            }
        break;
        case 'd':
        case 'D':
            printf("[I] investigacao\n");
            printf("[C] ciencia\n");
            printf("Selecione uma opcao:\n");
            scanf(" %c", &subcategoria);
            
            switch (subcategoria)
            {
                case 'i':
                case 'I':
                    printf("Deep web");
                break;
                case 'c':
                case 'C':
                    printf("Terra");
                break;
                default:
                    printf("Invalido!\n");
                break;
            }    
        break;
        default:
            printf("Invalido");
        break;
    }
    return 0;
}
