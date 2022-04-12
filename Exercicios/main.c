#include <stdio.h>
#include <stdlib.h>

int main(void){
    int e_nro;
    do{
        do{
            printf("Entre com o numero: ");
            scanf("%i", &e_nro);
        }while (e_nro<0);
        printf("%i\n", e_nro);
    }while (e_nro !=0);
    printf("Fim\n");
    return 0;
}
