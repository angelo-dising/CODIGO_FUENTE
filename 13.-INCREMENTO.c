#include<stdio.h>
#include<conio.h>


float meta;
float numb1 = 0;
float inc;
float INI;
float X;



int main(){
printf("INCREMENTOS ---------------------------\n");
printf("\nINGRSE EL NUMERO AL QUE QUIERE LLEGAR (SOLO ENTEROS): ");
scanf("%d",&meta);
printf("\nINGRESE EL INCREMENTO QUE DESEA: ");
scanf("%d",&inc);
printf("\nINGRESE EL NUMERO EN EL QUE DESEA EMPEZAR: ");
scanf("%d",&INI);
printf("\n%d\n",INI);



for (float i = INI; i <= meta && INI <= meta ; i++){
    
INI =  INI + inc;

printf("%i\n",INI);


}
 
 
 getch();
return 0 ;

}