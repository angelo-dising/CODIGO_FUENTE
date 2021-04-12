#include<stdio.h>
#include<conio.h>


int main(){
    int SWICH;
int opcion;
float largo;
float ancho;
float pi = 3.14159;
float radio;
float resultado;
do
{
    


printf("---------------------\n");
printf("CALACULADORA DE AREAS\n");
printf("---------------------\n");
printf("\n");
printf("CALCULAR CUADRADO----------------(1)\n");
printf("CALCULAR TRIANGULO ISOSELES------(2)\n");
printf("CALCULAR CIRCULO-----------------(3)\n");
printf("CALCULAR RECTANGULO--------------(4)\n");

printf("[]-\t");
scanf("%i",&opcion);


if(opcion == 1){
    printf("CUADRADO-----------------------------\n");
    printf("LADO: ");
    scanf("%f",&largo);
resultado = largo * largo;
printf("\n EL RESULTADO ES IGULA A :  %f",resultado);
}else if(opcion == 2){
    printf("TRIANGULO-----------------------------\n");
    printf("BASE: ");
    scanf("%f",&ancho);
    printf("\nALTURA: ");
    scanf("%f",&largo);
resultado = (largo * ancho)/2;


printf("\n RESULTADO : %f",resultado);
}else if(opcion == 3){
    printf("CIRCULO------------------------------\n");
    printf("RADIO: ");
    scanf("%f",&radio);
    resultado = pi * (radio*radio);
    printf("\nRESULTADO: %f",resultado);
}else if(opcion == 4){
    printf("RECTANGULO----------------------------\n");
    printf("LARGO: ");
    scanf("%f",&largo);
    printf("\nANCHO: ");
    scanf("%f",&ancho);
    resultado = ancho * largo;
    printf("\n RESULTADO : %f",resultado);

}
printf("\nDESEA CONTINUAR:         SI(1)           NO(0)\n");
scanf("%i",&SWICH);
}while (SWICH == 1);

getch();
    return 0;
}