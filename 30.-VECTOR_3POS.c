#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){

srand(time(NULL));
int contador = 0;
int vector[10];
float promedio;
int temp;
float res;

for (int x = 0; x <= 10; x++)
{
    vector[x] = rand() % 101;

    printf("[%d]",vector[x]);

}

printf("\n");
for (int x = 0; x <= 9; x++)
{

if (vector[x] % 3 == 0)
{

contador++;

}

}

printf("HAY %d MULTIPLOS DE 3 EN EL ARREGLO: \n",contador);

for (int i = 0; i < 10; i++)
{
printf(" [%d] ",vector[i]);
}


    return 0;
}