#include<stdio.h>
#include<conio.h>

int main(){

int NUMEROX;

printf("INGRESE EL NUMERO PARA DETERMINAR SI ES PRIMO: ");
scanf("%i",&NUMEROX);

if (NUMEROX == 3)
{
    printf("ES PRIMO %i-",NUMEROX);
    printf("\n");

}else if (NUMEROX == 2)
{

    printf("\nES PRIMO %i-",NUMEROX);
    printf("\n");


}else if(NUMEROX % 2 == 0){

printf("NO ES PRIMO %i-",NUMEROX);
printf("\n");

}else if(NUMEROX % 3 == 0){

printf("NO ES PRIMO %i",NUMEROX);
printf("\n");

}
else{

    printf("ES PRIMO %i-",NUMEROX);
    printf("\n");
}


return 0;
}