#include <stdio.h>
void swap(int *px, int *py){
    int aux = *px;
    *px = *py;
    *py = aux;
}
int main()
{
    int x = 50, y = 500;
    printf("X:%d - Y: %d\n", x, y);
    swap(&x, &y);
    printf("X:%d - Y: %d\n", x, y);
    return 0;
}