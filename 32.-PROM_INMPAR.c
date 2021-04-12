#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int vector[10];
float prom;


int funcion_prom_impar(int vector1[10]){

for (int x = 1; x <= 10; x++)
{
  
prom = vector1[x] + prom;
printf("\n[%f]\n",prom);
printf("%d",x);
printf(" [%d] ",vector1[x]);

printf("\n");

x++;

}




}
int main(){
srand(time(NULL));

float promedio;
int temp;
float res;

for (int x = 0; x <= 10; x++)
{
    vector[x] = rand() % 101;

    printf("[%d]",vector[x]);

}

printf("\n");

funcion_prom_impar(vector);

res = prom / 5;
printf("EL PROMEDIO ES: %f",res);





    return 0;
}