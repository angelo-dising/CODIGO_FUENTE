#include <stdio.h>
#include <stdlib.h>

int main()
{
	int MAX;
printf("CUANROS NUMERO DESEA INGRESAR:");
    scanf("%d",&MAX);
    int numeros[MAX];
    int contador = 0;
    int auxiliar[MAX];
    int posicion=0;
    int numero=0;
    int contador2=0;
    int mayor=0;
    int posicionmayor=0;
    
    for(contador=0;contador<MAX;contador++) {
        printf("NUMERO %d : ",contador+1);
        scanf(" %d",&numeros[contador]);
    }


    printf("\nNUMEROS: ");
    for(contador=0;contador<MAX;contador++) {
        printf(" %d",numeros[contador]);
    }



    for(contador=0;contador<MAX;contador++) {
        auxiliar[contador] = 0;
    }



    for(contador=0;contador<MAX;contador++) {
        numero = numeros[contador];
        posicion = contador;
        for(contador2=contador;contador2<MAX;contador2++) {
            
            if(numeros[contador2]==numero){ 
                
                auxiliar[posicion]++;
            
            }

        }
    }
    

    mayor=auxiliar[0];
    posicionmayor = 0;
    for(contador=0;contador<MAX;contador++) {
        if(auxiliar[contador]>mayor) {
            posicionmayor=contador;
            mayor=auxiliar[contador];
        }
    }
   
    printf("\nMODA : %d",numeros[posicionmayor]);
    
    
    
  return 0;
}