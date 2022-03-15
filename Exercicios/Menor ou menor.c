#include <stdio.h>
#include <stdlib.h>
int main()
{
int e_nr1 ,e_nr2;
printf("Entre com o 1º Valor: ");
   scanf("%i" , & e_nr1);
printf("Entre com o 2º Valor: ");
   scanf("%i" , & e_nr2);
    if (e_nr1 < e_nr2) {
     printf(" %d Menor que e_nr2\n", e_nr2);  
    } else if (e_nr1 > e_nr2){
    printf("%d Maior que e_nr2\n", e_nr2);    
    }
    return 0;
}
