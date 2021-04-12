#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>

int main(){
srand(time(NULL));


char des[2];

int suma = 0;
int puntos = 0;
int puntos1 = 0;
 int dado1 = (rand() % 6) + 1;
int dado2 = (rand() % 6) + 1;
do{


suma = dado1 + dado2;
printf("\nSE LANZAN LOS DADOS!\n");
Sleep(3000);
suma = suma + puntos;
printf("LA CUENTA DE LOS DADOS DEL JUGADOR 1 ES:%d",suma);
if(suma == 7 || suma == 11){
Sleep(1000);
printf("\nEL JUGADOR 1 GANO!\n");
 suma = 0;
 puntos = 0;
 puntos1 = 0;
}
else if (suma == 2 || suma == 3 || suma == 12 || suma > 12)
{
    Sleep(1000);
    printf("\nEL JUGADOR 1 HA PERDIDO!\n");
    printf("EL JUGADOR 2 GANADO!"); 
 suma = 0;
 puntos = 0;
 puntos1 = 0;
}else{
    puntos = suma;
}



if( suma == 5 ||suma == 6 ||suma == 8 || suma == 9 ||suma == 10){

 dado1 = (rand() % 6) + 1;
 dado2 = (rand() % 6) + 1;

suma = dado1 + dado2;
printf("\nSE LANZAN LOS DADOS!\n");
Sleep(3000);
suma = suma + puntos1;
printf("LA CUENTA DE LOS DADOS DEL JUGADOR 2 ES:%d",suma);
if(suma == 7 || suma == 11){
Sleep(1000);

printf("\nEL JUGADOR 2 GANO!\n");
suma = 0;
puntos = 0;
puntos1 = 0;
}
else if (suma == 2 || suma == 3 || suma == 12 || suma > 12)
{
    Sleep(1000);
    printf("\nEL JUGADOR 2 HA PERDIDO!\n");
    suma = 0;
puntos = 0;
puntos1 = 0;
}
}
printf("\nQUIERE SEGURI JUGANDO?\n");
scanf("%s", des);

}while (strcmp(des,"N") != 0);









}