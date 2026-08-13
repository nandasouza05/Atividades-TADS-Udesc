#include <stdio.h>

int main()
{
    int i = 1;
    float f = 2.5;
    char c = 'a';

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    printf("ANTES:\n%d\n%.2f\n%c\n", i, f, c);

    *pi = 5;
    *pf = 5.6;
    *pc = 'b';

    printf("DEPOIS:\n%d\n%.2f\n%c\n", i, f, c);

    return 0;
}
