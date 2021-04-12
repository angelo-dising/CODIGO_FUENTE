
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int numeros[10];
	int mayor = 0;
  int pos = 0; 
    srand(time(NULL));

for (int i = 0; i < 10; i++)
{
    numeros[i] = rand() % 11; 
    printf(" [%d] " ,numeros[i]);
}


	for (int i = 0; i < 10; ++i)
	{
       
		if (numeros[i] > mayor){ 
            pos = i;
            mayor = numeros[i];
        }
	}
	printf("El mayor es %d y esta en la posicion %d ", mayor,pos);


}