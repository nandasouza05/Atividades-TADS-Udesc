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

int main()
{
    FILE *file;
    char letra;

    file = fopen("escrever_ler.txt", "w+");

    if (file){
        printf("Digite um texto e pressione ENTER ao finaliza!\n");
        scanf("%c", &letra);
        while (letra != '\n')
        {
            fputc(letra, file);
            scanf("%c", &letra);
        }
        rewind(file);

        printf("\tTexto lido do arquivo:\n");
        while (!feof(file)){
            letra = fgetc(file);
            printf("%c", letra);
        }
        fclose(file);    
    }else{
        printf("ERRO\n");
    }
    return 0;
}
