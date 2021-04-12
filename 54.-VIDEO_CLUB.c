#include<stdio.h>






int main(){
    int seleccion[3];
int seleccion1 = 0;
int cuenta = 1;
int precio;

printf("\n(1) AVENGERS END GAME ----------- 1000");

printf("\n(2) CARS 20 --------------------- 750");

printf("\n(3) FRANCOTIRADIR --------------- 1000");

printf("\n(4) DURO DE MATAR --------------- 10");

printf("\n(5) TRSNDOFRMERS 30 ------------- 70");

printf("\n(6) 1984  ---------------------------- 100");

printf("\n(7) HAKERS NINGUN SITEMA ES SEGURO ----200");

for (int i = 1; i <= 3; i++)
{
    
printf("\nINGRESA LA PELICULA %d: ",i);
scanf("%d",&seleccion1);

switch (seleccion1)
{
case 1:
seleccion[i] = 1000;
    break;
case 2:
seleccion[i] = 750;
    break;
case 3:
seleccion[i] = 1000;
    break;
case 4:
seleccion[i] = 10;
    break;
case 5:
seleccion[i] = 70;
    break;
case 6:
seleccion[i] = 100;
    break;
case 7:
seleccion[i] = 200;
    break;

default:printf("NO TENEMOS ESA OPCION!");
i--;
cuenta--;
    break;
}
cuenta++;
}
    for(int x = 0;x < 3;x++){
  for (int i = 0,j = 1; i < 2; i++,j++)
  {
      if (seleccion[i] <seleccion[j] )
      {
          int temp;
          temp = seleccion[i];
          seleccion[i] = seleccion[j];
          seleccion[j] = temp;
      }
      
  }
    }
precio = seleccion[0] + seleccion[1];
printf("\nEL PRECIO DE TUS PELICULAS ES DE, NO SE TE COBRO LA PELICULA MAS BARATA POR OFERTA:$%d",precio);
    return 0;
}