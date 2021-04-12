#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
int fila;
int columna;

int vector[3][3];

for (int x = 0; x < 3; x++)
{
   for (int y = 0; y < 3; y++)
   {
        vector[x][y] = rand() % 10;
   }
}

printf("INDIQUE LA COLUMNA DE LA FILA (0)  (1)  (2) : ");
scanf("%d",&fila);
printf("\nINDIQUE LA COLUMNA (0)  (1)  (2): ");
scanf("%d",&columna);

printf("EL VALOR GUARDADO EN ESAS CORDENADAS ES: %d",vector[columna][fila]);
printf("\n");

for (int x = 0; x < 3; x++)
{
    printf("\n");
    for (int  y = 0; y < 3; y++)
    {
        printf("[%d]",vector[y][x]);
    }
    
}




    return 0;

}