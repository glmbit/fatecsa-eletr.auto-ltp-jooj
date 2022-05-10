#include <stdio.h>

int main()
{
float s_saida [4][5]= {{0.0, 0.5, 1.2, 1.3, 1.4},
{0.0, 0.7, 1.7, 1.8, 2.3},
{0.0, 0.8, 1.9, 2.0, 4.0},
{0.0, 1.0, 2.0, 2.2, 5.0}};

int p_rpm [5]= {0, 1000, 2000, 3000, 4000};
float P_lambda [4]= {0.1, 0.2, 0.3, 0.4};
float e_lambda;
int e_rpm, v_var, v_rpm_pos, v_lambda_pos;
printf("Entre com o valor de rotação (RPM): ");
scanf("%i", &e_rpm);
printf("Entre com o valor da sonda lambda (V): ");
scanf("%f", &e_lambda);
v_rpm_pos=0;
v_var=0;
while((p_rpm [v_var]<= e_rpm)&&(v_var<5)){
    v_rpm_pos=v_var;
    v_var++;
}
v_lambda_pos=0;
v_var=0;
while((P_lambda[v_var]<=e_lambda)&&(v_var<4)){
    v_lambda_pos=v_var;
    v_var++;
}
printf("O valor= %2f.\n", s_saida[v_lambda_pos][v_rpm_pos]);
    return 0;
}
