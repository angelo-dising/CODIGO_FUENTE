#include<stdio.h>
#include<string.h>




int main(){

float horas;
float salariomin = 141.7;
float salario;
float cos = 1;
printf("\nINGRESE LA CNATIDAD DE HORAS\n");
printf("\nSALARIO MINMO POR HORA:  $141.7\n");   
scanf("%f",&horas);

if (horas > 40)
{
    cos = 1.5;
}

salario = (horas * salariomin) * cos;


printf("TU PAGO SON $%f",salario);
}