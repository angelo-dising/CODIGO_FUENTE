#include<stdio.h>


int main(){

float vector[10];
float suma;
int prom;
int tam;
int cuenta_mayores = 0;
int cuenta_menores = 0;
for (int i = 0; i < 10; i++)
{
    printf("INGRESE UN NUMERO: ");
    scanf("%f",&vector[i]);
    suma = suma + vector[i];
    printf("\n[%f]\n",suma);
}

suma = suma / 10;
printf("\n PROMEDIO: [%f]",suma);

for (int i = 0; i < 10; i++)
{
    if (vector[i] <= suma)
    {
 
 
        printf("\nEL NUMERO  %f  ES MENOR QUE LA MEDIA\n",vector[i]);
        cuenta_menores++;
    }
    if (vector[i] > suma)
    {
        printf("\nEL NUMERO %f ES MAYOR QUE LA MEDIA\n",vector[i]);
        cuenta_mayores++;
      
    }
    
    
}
printf("\n HAY %d NUMEROS MAYORES QUE LA MEDIA\n",cuenta_mayores);
printf("\n HAY %d NUMEROS MENORES QUE LA MEDIA\n",cuenta_menores);







return 0;
}