#include<stdio.h>




int main(){

float litros;
float monto;
printf("INGRESE LA CANMTIDAD DE AGUA CONSUMIDA POR LA VIVIENDA:");
scanf("%f",&litros);




if(litros <= 200){
monto = (litros - 50)* 10;
}else if(litros > 200){




    monto = (litros -50 ) * 30;
}
if (monto < 1000)
{
    monto = 1000;
}


printf("\nSU CUOTA ES: $%f",monto);






    return 0;
}