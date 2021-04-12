#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
srand(time(NULL));
int tam_ver;

int calculo_inpar = 0;
float prom_impar = 0;
int calculo_par = 0;
float prom_par = 0;
int contador_par = 0;
int contador_inpar = 0;
printf("INGRESE EL TAMÑO DEL VECTOR:");
scanf("%d",&tam_ver);

int vector[tam_ver];



for (int x = 0; x < tam_ver; x++)
{
    int random = rand() % 10;
vector[x] = random;
}


for (int x = 0; x < tam_ver; x++)
{
    printf(" [%d] \n",vector[x]);
}


for (int i = 0; i < tam_ver; i++)
{

    if (vector[i] % 2 == 0)
    {
        calculo_par = calculo_par + vector[i];
        contador_par++;
        printf("PAR:[%d] CUENTA[%d]\n",vector[i],contador_par);
    }else{
        calculo_inpar = calculo_inpar + vector[i];
        contador_inpar++;
         printf("INPAR:[%d] CUENTA[%d]\n",vector[i],contador_inpar);

    }
    
    
}


prom_impar = calculo_inpar/ contador_inpar;
prom_par=calculo_par / contador_par;


printf("PARES_PROMEDIO:[%f]\n",prom_par);

printf("INPARES_PROMEDIO:[%f]\n",prom_impar);

    return 0;
}