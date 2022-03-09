#include <stdio.h>

int main(){
char e_op;
float e_nro_1, e_nro_2, s_result;
printf("Entre com nro 1:");
scanf("%f", &e_nro_1);
printf("Entre com a operação (+, -, * ou /)");
scanf("%c", &e_op);scanf("%c", &e_op);
printf("Entre com o nro 2: ");
scanf("%f", &e_nro_2); 
switch (e_op) {
case '+': s_result = e_nro_1 + e_nro_2;
case '-': s_result = e_nro_1 - e_nro_2;
case '*': s_result = e_nro_1 * e_nro_2;
case '/': if (e_nro_2 != 0)
s_result= e_nro_1 / e_nro_2;
break;
}
switch (e_op){
case '+': case '-':
case '*': printf ("s %f\n", s_result);
break;
case '/':
if ((e_nro_2 ==0)){
printf("ERRO");
}else{
printf("s= %f", s_result);
}
break;
default:
printf("Erro de operação");
}
    return 0; 
}
