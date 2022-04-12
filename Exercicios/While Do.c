#include <stdio.h>
#include <stdlib.h>

int main()
{
int e_nro;
do {
    printf("Digite um valor >0:\n", e_nro);
    scanf("%i", &e_nro);
    
} while(e_nro <=0);
printf("O numero: %i inserido é maior que 0.\n", e_nro);
    return 0;
}
