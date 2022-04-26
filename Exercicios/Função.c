#include <stdio.h>
#include "Test.h"

int f_soma(int v_a, int v_b);
void mostrar (int v_valor);
int main()
{
    int e_valor1, e_valor2, s_resultado_soma;
    printf("Digite o primeiro valor:\n");
    scanf("%i", &e_valor1);
    printf("Digite o segundo valor:\n");
    scanf("%i", &e_valor2);
    s_resultado_soma = f_soma(e_valor1, e_valor2);
    //s_resultado_soma = e_valor1 + e_valor2;
    mostrar(s_resultado_soma);
    //printf("%i\n", s_resultado_soma);
    
    return 0;
}
int f_soma(int v_a, int v_b){
    int s_resultado;
    s_resultado = v_a + v_b;
    return s_resultado;
}
