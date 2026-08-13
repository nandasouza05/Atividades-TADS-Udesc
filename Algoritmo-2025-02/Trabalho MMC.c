#include <stdio.h>

int main() {
    int num1, num2;         
    int resto1, resto2;           
    int divisor;        
    int mmc, mdc;       
    int continuar;      

    do {
        do {
            printf("Digite dois valores inteiros positivos: ");
            scanf("%d %d", &num1, &num2);
            if (num1 <= 0 || num2 <= 0) {
                printf("Os valores devem ser positivos!\n");
            }
        } while (num1 <= 0 || num2 <= 0);

        resto1 = num1;
        resto2 = num2;
        mmc = 1;
        mdc = 1;
        divisor = 2;

        while (resto1 != 1 || resto2 != 1) {
            if (resto1 % divisor == 0 || resto2 % divisor == 0) {

                mmc *= divisor;

                if (resto1 % divisor == 0 && resto2 % divisor == 0) {
                    mdc *= divisor;
                }

                if (resto1 % divisor == 0) resto1 /= divisor;
                if (resto2 % divisor == 0) resto2 /= divisor;
            } else {
                divisor++;
            }
        }

        printf("\nMMC(%d, %d) = %d\n", num1, num2, mmc);
        printf("MDC(%d, %d) = %d\n\n", num1, num2, mdc);

        printf("Deseja calcular novamente? (1 = sim / 0 = nao): ");
        scanf("%d", &continuar);
        printf("\n");

    } while (continuar == 1);

    printf("Programa encerrado.\n");

    return 0;
}
