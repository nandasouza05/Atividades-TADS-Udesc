#include <stdio.h>

int main()
{
    int v[5] = {100, 200, 300, 400, 500};
    int i = 2;
    printf("v - %p\n", v);
    printf("&v[0] - %p\n", &v[0]);
    printf("v + i - %p\n", v + i);
    printf("*v + i - %d\n", *v + i);
    printf("(*v) + i - %d\n", (*v) + i);
    printf("*(v + i) - %d\n", *(v + i));
    printf("*(v + (i + 2)) - %d\n", *(v + (i + 2)));

    return 0;
}
