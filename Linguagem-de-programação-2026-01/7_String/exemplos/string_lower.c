#include <stdio.h>

int main()
{
    char lower[10] = "palavra";
    char upper[10];
    int i = 0;

    while (lower[i] != '\0')
    {
        upper[i] = lower[i] - 32;
        i++;
    }

    printf("lower = %s\n", lower);
    printf("upper = %s", upper);
    
    return 0;
}
