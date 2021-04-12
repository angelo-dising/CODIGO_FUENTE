#include<stdio.h>


float calf1;
float calf2;
float calf3;
float PROMEDIO;
int SWICH = 1; 
int main(){

do
{
printf("_____________________________________\n");
printf("SISTEMA DE CALIFICACIONES DEL CBTIS\n");
printf("_____________________________________\n");
printf("\n");

printf("INGRESE CALIFICACION 1:");
scanf("%f",&calf1);
printf("\nINGRESE CALIFICACION 2:");
scanf("%f",&calf2);
printf("\nINGRESE CALIFICACION 3:");
scanf("%f",&calf3);

printf("\nALCULANDO RESULTADO .................................\n");

PROMEDIO = (calf1 + calf2 + calf3) / 3;

if(PROMEDIO >= 6){
printf("FELICIDADES TE QUEDAS EN EL CBTIS !\n");
printf("PRIMEDIO: %f", PROMEDIO);
}
else{
printf("LO SIENTO MUECHO QUEDAS DADO DE BAJA\n");
printf("PROMEDIO: %f", PROMEDIO);
}
printf("\ndesea continuar?     SI(1)  NO(0)    :");
scanf("%i",&SWICH);
if(SWICH == 1){
printf("\nREINICIANDO\n");
}else{

printf("\nCERRANDO SESION\n");

}
}while (SWICH == 1 );
 
return 0;
}