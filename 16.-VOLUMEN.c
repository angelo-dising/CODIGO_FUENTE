#include<stdio.h>
#include<string.h>

int main(){



char SWICH[1];
float arista;
float volumen;

do
{
printf("INGRESE EL ARISTA DE UN CUBO: ");
scanf("%f",&arista);



volumen = arista * arista * arista;


if (volumen == 0)
{
    printf("EL VOLUMEN ES IGUAL A  : 0");
}
else{

printf("EL VOLUMEN ES IGUAL A:  %f\n",volumen);
}

printf("\nDESEAS CONTINIUAR?               S(Si)      N(NO)\n");
scanf("%s", SWICH);



}while (strcmp(SWICH , "N") != 0);





    return 0;

}