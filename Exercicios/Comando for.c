#include <stdio.h>
#include <stdlib.h>

int main()
{
int valor_nro_n, valor_aux;
printf("Digite o valor de numero:\n");
scanf("%i", &valor_nro_n);
for(valor_aux=0; valor_aux <= valor_nro_n; valor_aux++);
{
    printf("%d\n", valor_aux);
}
    return 0;
}
