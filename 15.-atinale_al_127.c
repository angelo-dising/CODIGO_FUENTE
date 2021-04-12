#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

int mero127 = 127;
int numero_insert;
char CONTINUAR[2];


do
{
printf("INGRESA UN NUMERO E INTENTA ATINARLE AL NUMERO SECRETO: ");
scanf("%i",&numero_insert);
printf("\f");


switch (numero_insert)
{




case (127):



    printf("\nFELICIDADES LE ATINASTE AL NUMERO SECRETO\n");

    break;

default:

printf("\nLO SIENTO NO ES EL NUMERO SECRETO\n");




    break;


}
printf("QUIERES VOLVER A INTENTARLO?         Y-(SI)       N-(NO)\n");
scanf("%s", CONTINUAR);



}while (strcmp(CONTINUAR , "n") != 0);



    return 0;

}