#include <stdio.h>

int main()
{
   printf("Digite o valor em Metros por segundo: ");

float e_metrospsegundo, s_kmphora;
scanf("%f", & e_metrospsegundo);
s_kmphora= 3.6* e_metrospsegundo;
printf("Resultado:");
printf("%f\n",s_kmphora);
    return 0;
}
