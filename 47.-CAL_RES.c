#include<stdio.h>


float VAL_TOT;
int op;
int des;


int serie(){
int RES1;
int RES2;
int RES3;
printf("INGRESE EL VALOR DE LA PRIMERA RESISTENCIA: ");
scanf("%f",&RES1);
printf("INGRESE EL VALOR DE LA SEGUNDA RESISTENCIA: ");
scanf("%f",&RES2);
printf("INGRESE EL VALOR DE LA TERCERA RESISTENCIA: ");
scanf("%f",&RES3);
VAL_TOT = RES1 + RES2 + RES3;
}

int paralelo(){
float RES1;
float RES2;
float RES3;
printf("INGRESE EL VALOR DE LA PRIMERA RESISTENCIA: ");
scanf("%f",&RES1);
printf("INGRESE EL VALOR DE LA SEGUNDA RESISTENCIA: ");
scanf("%f",&RES2);
printf("INGRESE EL VALOR DE LA TERCERA RESISTENCIA: ");
scanf("%f",&RES3);
VAL_TOT = (1/RES1)+ (1/RES2) + (1/RES3);
}

int main(){


printf("DESEA CALCULAR LA RESISTENCIA EN PARELELO O EN SERIE?");
printf("\n");
printf("(0) = PARALELO    (1)= SERIE ");
scanf("%d",&des);


switch (des){
    case 0: 
    paralelo(); 
    break;

    case 1:
     serie();
      break;

    default:   
     printf("NO ES UNA OPCION VALIDA!"); break;

}
printf("\nEL VALOR DE LA RESITENCIA ES: %f",VAL_TOT);

    return 0;
}