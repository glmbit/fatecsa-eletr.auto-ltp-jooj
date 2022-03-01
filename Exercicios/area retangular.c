#include <stdio.h>
 
int main()
{
    float largura, comprimento, area;
 
printf("Largura= "); scanf("%f", &largura);
printf("comprimento= "); scanf("%f", &comprimento);
area = largura * comprimento;
printf("Area = %f m2 \n", area);
return 0;
}