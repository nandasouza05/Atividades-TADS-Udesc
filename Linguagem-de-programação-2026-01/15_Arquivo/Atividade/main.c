#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int quantidade;
    float preco;
}PRODUTO;


int main()
{
    PRODUTO produto;
    FILE *file = fopen("produtos.txt", "a+");

    printf("Nome do produto:\n");
    scanf("%s", produto.nome);
    printf("Quantidade do produto:\n");
    scanf("%d", &produto.quantidade);
    printf("Valor do produto:\n");
    scanf("%f", &produto.preco);

    if (file){
        fprintf(file, "NOME: %s\n", produto.nome);
        fprintf(file, "QUANTIDADE: %d\n", produto.quantidade);
        fprintf(file, "PREÇO: %.2f\n\n", produto.preco);
        fclose(file);
    }else{
        printf("ERRO NO ARQUIVO!\n");
    }
    return 0;
}

