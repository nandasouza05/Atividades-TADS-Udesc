#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tipo, classificacao, categoria, distribuidor;

    printf("\nTABELA DE FILMES E SERIES\n");
    printf("-------------------------------------------------------------------------------\n");

    printf("TIPO: 1-Filme, 2-Serie\n");
    printf("CATEGORIA: 1-Animacao, 2-Fantasia, 3-Drama, 4-Acao\n");
    printf("DISTRIBUIDOR: 1-Netflix, 2-Disney+, 3-HBO\n");

    printf("-------------------------------------------------------------------------------\n");

    printf("TITULO                \tTIPO \tCLASSIFICACAO\tCATEGORIA\tDISTRIBUIDOR\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("Kpop Demons Hunters   \tFilme\t0            \tAnimacao \tNetflix\n");
    printf("Hilda                 \tSerie\t0            \tFantasia \tNetflix\n");
    printf("Carmen Sandiego       \tSerie\t0            \tFantasia \tNetflix\n");

    printf("-------------------------------------------------------------------------------\n");
    printf("As Cronicas de Narnia\tFilme\t10            \tFantasia \tDisney+\n");
    printf("Stranger Things      \tSerie\t10            \tFantasia \tNetflix\n");
    printf("Anne With an E       \tSerie\t10            \tDrama    \tNetflix\n");

    printf("-------------------------------------------------------------------------------\n");
    printf("Deadpool             \tFilme\t18            \tAcao    \tDisney+\n");
    printf("Logan                \tFilme\t18            \tAcao    \tDisney+\n");
    printf("Breaking Bad         \tSerie\t18            \tDrama   \tNetflix\n");
    printf("Game of Thrones      \tSerie\t18            \tFantasia\tHBO\n");

    printf("-------------------------------------------------------------------------------\n");

    printf("\nFACA SUA ESCOLHA!\n");
    printf("\nO que voce quer assistir? Filme digite 1 e serie 2!\n");
    scanf("%d", &tipo);

    printf("Qual a classificacao? 0, 10 ou 18?\n");
    scanf("%d", &classificacao);

    printf("Qual a categoria? Animacao digite 1, fantasia 2, drama 3 e acao 4!\n");
    scanf("%d", &categoria);

    printf("Qual o distribuidor? Netfix digite 1, disney+ 2 e HBO 3!\n");
    scanf("%d", &distribuidor);

    if (tipo == 1 && classificacao == 0 && categoria == 1 && distribuidor == 1)
    {
        printf("\nFilme recomendado: Kpop Demons Hunters!!!\n");
    }
    else
    if (tipo == 2 && classificacao == 0 && categoria == 2 && distribuidor == 1)
    {
        printf("\nSerie recomendada: Hilda!!!\n");
        printf("Serie recomendada: Carmen Sandiego!!!\n");
    }
    else
    if (tipo == 1 && classificacao == 10 && categoria == 2 && distribuidor == 2)
    {
        printf("\nFilme recomendado: As Cronicas de Narnia!!!\n");
    }
    else
    if (tipo == 2 && classificacao == 10 && categoria == 2 && distribuidor == 1)
    {
        printf("\nSerie recomendada: Stranger Things!!!\n");
    }
    else
    if (tipo == 2 && classificacao == 10 && categoria == 3 && distribuidor == 1)
    {
        printf("\nSerie recomendada: Anne With an E!!!\n");
    }
    else
    if (tipo == 1 && classificacao == 18 && categoria == 4 && distribuidor == 2)
    {
        printf("\nFilme recomendado: Deadpool!!!\n");
        printf("Filme recomendado: Logan!!!\n");
    }
    else
    if (tipo == 2 && classificacao == 18 && categoria == 3 && distribuidor == 1)
    {
        printf("\nSerie recomendada: Breaking Bad!!!\n");
    }
    else
    if (tipo == 2 && classificacao == 18 && categoria == 2 && distribuidor == 3)
    {
        printf("\nSerie recomendada: Game of Thrones!!!\n");
    }
    else{
        printf("\nOpcao invalida!\n");
    }

    return 0;
}
