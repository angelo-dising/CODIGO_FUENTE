#include<stdio.h>



int main(){

float res;
float velocidad;
printf("INGRESE EL VALOR DE LA VELODAD EN KM/H :");
scanf("%f",&velocidad);

res = velocidad / 3.6;

printf("LA VELODCIDAD EN M/S : %f m/s",res);



    return 0;
}