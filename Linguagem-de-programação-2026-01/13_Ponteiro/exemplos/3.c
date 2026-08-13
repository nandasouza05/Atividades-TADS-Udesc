#include <stdio.h>
#define SIZE 5

void mostrar(int  *arr);

int main(){
    int v[5] = {100,200,300,400,500};
    int i = 2;

    mostrar(v);
    printf("----------------------- RESOLUÇÃO ---------------------------\n");
    printf("1. Valor de              v[0]:  %d \n", *v ); 
    printf("2. Endereço de           v[0]:  %p \n", &v[0] );
    printf("3. Endereço de           v[2]:  %p \n", v + i  );
    printf("4. Incrementa o valor de v[0]:  %d \n", *v + i );
    printf("5. Incrementa o valor de v[0]:  %d \n", (v) + i ); 
    printf("6. Valor de              v[2]:  %d \n", *(v + i) );
    printf("7. Valor de              v[4]:  %d \n", * ( v + ( i + 2 ) ) );
 
    return 0;
}

void mostrar(int  *arr){*
    for(int i = 0; i < SIZE; i++ )
        printf(" VALOR: [ %d ]:  %d  | ENDEREÇO: [ %d ]  %p  \n", i, arr[i], i, &arr[i]);
}