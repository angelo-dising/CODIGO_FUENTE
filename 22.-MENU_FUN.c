#include<stdio.h>
#include<string.h>
float numb1,numb2;
float resultado;

int suma(){

printf("INGRESE NUMERO 1 :  ");
scanf("%f",&numb1);
printf("\ncINGRESE EL NUMEROS 2 : ");
scanf("%f",&numb2);

resultado = numb1 + numb2;
}


int resta(){

printf("INGRESE NUMERO 1 :  ");
scanf("%f",&numb1);
printf("\ncINGRESE EL NUMEROS 2 : ");
scanf("%f",&numb2);

resultado = numb1 - numb2;

}


int multiplicacion(){

printf("INGRESE NUMERO 1 :  ");
scanf("%f",&numb1);
printf("\ncINGRESE EL NUMEROS 2 : ");
scanf("%f",&numb2);

resultado = numb1 * numb2;

}

int division(){

printf("INGRESE NUMERO 1 :  ");
scanf("%f",&numb1);
printf("\ncINGRESE EL NUMEROS 2 : ");
scanf("%f",&numb2);

resultado = numb1 / numb2;


}

int main(){
char op;
char swich[2];
do
{
    printf("\nQUE OPERACION DESEAS HACER\n");
    printf("SUMA(+)   RESTA(-)   MULTIPLICACION(*)  DIVISION(/)\n");

    scanf("%s",&op);



    switch (op)
    {
    case '+':
        suma();
        break;
     case '-':
        resta();
        break;
         case '*':
        multiplicacion();
        break;
         case '/':
        division();
        break;
    default:printf("ESO NO ES UNA OPERACION VALIDA !");
        break;
    }


printf("\nEL RESULTADO ES : %f",resultado);
printf("\nDESEA CONTINUAR?    SI(S)    NO(N)\n");
scanf("%s", swich);

} while (strcmp(swich,"N") != 0);




return 0;

}