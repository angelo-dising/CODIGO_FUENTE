#include<stdio.h>
#include<string.h>
int main(){

int num_infinito;
int res = 0;
char bot[2];
do
{
    
printf("INGRESA UN NUMERO: ");
scanf("%i",&num_infinito);

res = res + num_infinito;

printf("\nDESEAS CONTINUAR?       SI(S)      N(NO\n)");
scanf("%s",bot);

}while(strcmp(bot, "n") != 0 );

printf("LA SUMA ES :  %d",res);
    
    
    return 0;
}