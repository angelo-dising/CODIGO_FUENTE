#include<stdio.h>

int main()
{

int numeroX;

printf("INGRESE EL NUMERO A OBTENER SI ES INPAR: ");
scanf("%f",&numeroX);
 
if(numeroX % 2 == 0){

printf("el numero no es inpar");
}
else{

printf("el numero es inpar");

}

return 0 ;

}