#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    srand(time(NULL));
 int vector[20];
int z[10];
int x[10];


for (int i = 0; i < 20; i++)
{
    vector[i] = rand() % 31 - 20 ;
}




for (int i = 0; i < 20; i++)
{
    if (vector[i] > -1)
    {
            x[i] = vector[i];
            printf("NUMEORS POSITIVOS O IGUALES A O [%d]\n",x[i]);
    }    
}

for (int i = 0; i < 20; i++)
{
    if (vector[i] < 0)
    {
            z[i] = vector[i];
            printf("NUMEROS NEGATIVOS: [%d]\n",z[i]);
    }    
}

return 0;
}