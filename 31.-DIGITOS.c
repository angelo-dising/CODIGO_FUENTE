#include<stdio.h>


int contarDigitos(int Num){
int Contador, Num2;
        Num2 = Num;
        Contador = 0;
        while(Num != 0){
            Contador++;
            Num=(Num / 10);
        }
    printf("LA CANTIDAD DE DIGITOS DE [%d] ES = %d\n",Num2,Contador);
 }


int main(){

int numero1;

printf("INGRESE UN NUMERO CON N DIGITOS:");
scanf("%d",&numero1);


contarDigitos(numero1);


    return 0;
}