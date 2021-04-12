#include<stdio.h>
#include<string.h>
#include<math.h>



int main(){

double  numb;
double  pot;
double  res;
char cont[2];
int ini = 0;
do{
printf("\ninngrese el numero al que le quiere sacar potencia:");
scanf("%lf",&numb);
printf("\ningrese la potencia deseda:");
scanf("%lf",&pot);

double elevado = pow(numb, pot);
printf("%lf",elevado);


printf("\nDESEA CONTINUAR:     SI(S)   NO(N)\n");

scanf("%s",&cont);



}while(strcmp(cont,"N" ) != 0);









    return 0;
}