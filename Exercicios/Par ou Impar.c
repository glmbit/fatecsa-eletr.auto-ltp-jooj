#include <stdio.h>

int main(){

int e_nro;
printf("Entre com algum valor: ");
scanf("%i" , & e_nro);
if ((e_nro %2)==0); {
printf("Par \n");
printf("%i\n", e_nro);

}
if (!(e_nro %2)==1); {
printf("Impar\n");
}
    return 0;
}
