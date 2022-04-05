#include <stdio.h>

int main()
{
    float e_resistor1, e_resistor2, e_resistor3, e_resistor4, s_result;
    
    printf("Cálculo resistores em série");
    printf("\nDigite o valor do 1º resistor:");
    scanf("%f", & e_resistor1);
    printf("\nDigite o valor do 2º resistor:");
    scanf("%f", & e_resistor2);
    printf("\nDigite o valor do 3º resistor:");
    scanf("%f", & e_resistor3);
    printf("\nDigite o valor do 4º resistor:");
    scanf("%f", & e_resistor4);
    s_result= e_resistor1+e_resistor2+e_resistor3+e_resistor4;
    printf("Resultado:");
    printf("%f\n",s_result);
    return 0;
}
