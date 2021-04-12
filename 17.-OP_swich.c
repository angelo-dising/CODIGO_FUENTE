#include<stdio.h>
#include<string.h>



int main(){
float numb_1;
float resultado;
float numb_2;
char op;
char swich[2];

do{
printf("QUE OPERACION QUIERE HACER?\n");
printf("SUMA (+)     RESTA(-)   MULTIPLICACION(*)     DIVICION(/)\n");

scanf("%s",&op);



switch (op)
{
case '+':
    printf("NUMERO 1: ");
    scanf("%f",&numb_1);
    printf("NUMERO 2: ");
    scanf("%f",&numb_2);

    resultado = numb_1 + numb_2;
    printf("EL RESULTADO ES = %f",resultado);
    break;
case '-':
    printf("NUMERO 1: ");
    scanf("%f",&numb_1);
    printf("NUMERO 2: ");
    scanf("%f",&numb_2);

    resultado = numb_1 - numb_2;
    printf("EL RESULTADO ES = %f",resultado);
    break;
    case '*':
    printf("NUMERO 1: ");
    scanf("%f",&numb_1);
    printf("NUMERO 2: ");
    scanf("%f",&numb_2);

    resultado = numb_1 * numb_2;
    printf("EL RESULTADO ES = %f",resultado);
    break;

    case '/':
    printf("NUMERO 1: ");
    scanf("%f",&numb_1);
    printf("NUMERO 2: ");
    scanf("%f",&numb_2);

    resultado = numb_1 / numb_2;
    printf("EL RESULTADO ES = %f",resultado);
    break;
default:printf("NO SE HA SELECCIONADO UNA OPERACION VALIDA !");

    break;
}

printf("\nDESEA CONTINUAR?      S(SI)      N(NO)\n");
scanf("%s", swich);

}while (strcmp(swich,"N") != 0);



return 0;

}