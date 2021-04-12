#include<stdio.h>
#include<string.h>



int main(){

int numb_1;
char SWICH[2];

do{
printf("\nINGRESE UN MUMERO CUALQUIERA: ");
scanf("%d",&numb_1);
printf("\n");
switch (numb_1)
{
case 1 :
printf("HOLY ES DOMINGO");
break;  

case 2 :
printf("HOY ES LUNES");
break;

case 3 :
printf("HOY ES MARTES");
break;

case 4 :
printf("HOY ES MIERCOES");
break;

case 5 :
printf("HOY ES JUEVES");
break;

case 6 :
printf("HOY ES VIERNES");
break;

case 7 :
printf("HOY ES SABADO");
break;

default:printf("\nEL NUMERO SELECCIONADO NO COINCIDE CON NINGUN DIA DE LA SEMANA\n");
    break;
}

printf("\nDESA CONTNUAR:           S(SI)     N(NO)");
scanf("%s", SWICH);



}while (strcmp(SWICH, "n") != 0);







 return 0;   
}