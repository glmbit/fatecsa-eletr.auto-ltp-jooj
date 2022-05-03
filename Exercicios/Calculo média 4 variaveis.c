#include <stdio.h>

int main()
{
int e_v0, e_v1, e_v2, e_v3, s_media;  
    printf("Média aritimetica");
    printf("\n Insira o primeiro valor: ");
       scanf("%i", & e_v0);
    printf("\n Insira o segundo valor: ");
       scanf("%i", & e_v1);
    printf("\n Insira o terceiro valor: ");
       scanf("%i", & e_v2);
    printf("\n Insira o quarto valor: ");
       scanf("%i", & e_v3);
s_media= (e_v0+e_v1+e_v2+e_v3)/4;
printf("Média: ");
printf("%i", s_media);
    return 0;
}
