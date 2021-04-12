#include<stdio.h>
#include<stdlib.h>
#include<time.h>




int main(){
srand(time(NULL));
int numero;
int nume_al;

nume_al = rand() % 11;

printf("INGREESA EL NUMERO E INTENTA ADIVINARLO:");
scanf("%d",&numero);

if (numero == nume_al)
{
    printf("LE ATINASTE !");
}else{
printf("NO LE ATINASTE !");
}




return 0;
}