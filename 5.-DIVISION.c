#include<stdio.h>
#include<conio.h>

int numero_1;
int numero_2;
int resultado;

int main(){

printf("Inserte numero a dividir:  \n");
scanf("%d",&numero_1);

printf("Inserte otro numero a dividir:  \n");
scanf("%d",&numero_2);

resultado = numero_1 / numero_2;

printf("El resultado es: \t %d",resultado);

    getch();
    return 0;
}