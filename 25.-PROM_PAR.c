#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){

srand(time(NULL));

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
for (int x = 2; x <= 10; x++)
{
promedio = vector[x] + promedio;
printf("\n[%f]\n",promedio);
printf("%d",x);
printf(" [%d] ",vector[x]);

printf("\n");

x++;

}


printf("\n%f\n",promedio);
res = promedio / 5;
printf("EL PROMEDIO ES: %f",res);





    return 0;
}