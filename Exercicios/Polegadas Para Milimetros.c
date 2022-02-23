#include <stdio.h>

int main()
{
   printf("Digite o valor em Polegadas: ");

float e_polegada, s_milimetro;
scanf("%f", & e_polegada);
s_milimetro= 25.4* e_polegada;
printf("Resultado:");
printf("%f\n",s_milimetro);
    return 0;
}
