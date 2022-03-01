#include <stdio.h>

int main()
{
float e1_p1 , e2_p2, el_l, s_media;
s_media = e1_p1*0.3 + e2_p2*0.5 + el_l*0.2;
printf("Digite a nota de P1: ");
scanf("%f", & e1_p1);
printf("Digite a nota de P2: ");
scanf("%f", & e2_p2);
printf("Digite a nota de L: ");
scanf("%f", & el_l);

printf("Resultado:");
printf("%f\n",s_media);
    return 0;
}