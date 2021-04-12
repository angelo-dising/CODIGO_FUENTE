
#include <stdio.h>
#include <math.h>


int main(){
float res;
float a1;
float a2;
float b1;
float b2;

printf("coordenada x: ");
scanf("%f",&a1);
printf("coordenada y: ");
scanf("%f",&b1);
printf("coordenada de x2: ");
scanf("%f",&a2);
printf("coordenada de y2: ");
scanf("%f",&b2);

res = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
printf("%f",res);
    return 0;
}