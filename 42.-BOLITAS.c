#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(NULL));
char DES[2];
int objeto;
float cuenta;
char desicion[2];
int contador = 1;

do{
    if ( contador)
    {
        
    }
    
printf("\nHOY TENEMOS UNA PROMOCION ESPECIAL!, SAQUE UNA BOLITA Y SI GANA LE DAREMOS UN DESPUENTO ESPECIAL!\n");
printf("SACAR UNA BOLITA S/N ?");
scanf("%s",DES);

if (strcmp(DES , "N") != 0)
{
int random1 = rand() % 11;
int random2 = rand() % 11;

printf("TU bolita es la numero:%d\n",random1);
if (random1 == random2){
int temporal;
printf("FELICIDADES GANAESTE UN DESCUENTO DE 50 PORCIENTO DE DESCUENTO OBTUVISTE LA BOLITA DORADA\n");
printf("\nINGRESE LA CANTIDAD DE EL CLIENTE:");
scanf("%f",&cuenta);
cuenta = cuenta / 2;
printf("MONTO A PAGAR : $%f\n",cuenta);
}else{
    printf("\nLO SIENTO NO GANASTE DESCUENTO TU BOLITA ES AZUL :(\n");

}
}

printf("\nCONTIUAR?      SI(S)    NO(N)\n");
scanf("%s",DES);
}while(strcmp(DES, "N") != 0);


    return 0;
}