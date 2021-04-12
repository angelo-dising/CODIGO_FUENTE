#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int entero;
    float vec[10];
    int suma = 0;
    int multi = 1;
    int tem = 0;
  
  srand((unsigned) time(NULL));

  for (int i = 0; i < 10; i++){

vec[i] = (float)(rand() % 100 ) / 10;
entero = vec[i];
  if(vec[i] - entero){

  }else{
     
suma =  suma + vec[i];
multi = multi * vec[i];
  }
  }

for (int i = 0; i < 10; i++)
{
   
    entero = vec[i];
    if(vec[i] - entero){
 printf(" [%f] ",vec[i]);
  }else{
     
printf("\nENTERO DETECTADO EN POSICION DE ARREGLO %d [%f]\n",i,vec[i]);
  }
}

printf("\nLA SUMA DE DE LOS NUEMROS ENTEROS DE EL ARREGLO ES: %d\n",suma);
printf("LA MULTIPLICACION DE DE LOS NUEMROS ENTEROS DE EL ARREGLO ES: %d",multi);


  return 0;
}