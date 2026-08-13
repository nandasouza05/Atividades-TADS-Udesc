#include <stdio.h>
#include <stdlib.h>

/*Modos de abertura de arquivo:
    w -> Escrita
    r -> Leitura
    a -> Anexar
    r+ -> Leitura e escrita
    w+ -> Leitura e escrita (apaga o conteudo caso o arquivo exista)
    a+ -> Leitura e escrita (adiciona ao final do arquivo)
*/
void escrever();
void ler();

int main()
{
    char nome[50] = {"3_funções.txt"};

    escrever(nome);
    ler(nome);

    return 0;
}

void escrever(char f[])
{
    FILE *file = fopen(f, "w");
    char letra;
    if (file){
        printf("Digite um texto e pressione ENTER ao finaliza!\n");
        scanf("%c", &letra);
        while (letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }else{
        printf("ERRO!\n");
    }
}
void ler(char f[])
{
    FILE *file = fopen(f, "r");
    char letra;
    if (file){
        printf("\tTexto lido do arquivo:\n");
        while (!feof(file)){
            letra = fgetc(file);
            printf("%c", letra);
        }
        fclose(file);
    }else{
        printf("ERRO!\n");
    }
    
}

