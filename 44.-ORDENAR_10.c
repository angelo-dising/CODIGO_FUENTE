
#include <stdio.h>
#define tam_vector 10 

int main () 
{ 
  int vector1[tam_vector]; 
  int j;
  int incremento;
  int temp;
  int i; 

  

  printf ("INGRESE LOS NUMEROS A ORDENAR:\n", tam_vector); 
  
  
  for (incremento = 0; incremento < tam_vector; incremento++) 
  {     
    printf ("#-:"); 
    scanf ("%d", &vector1[incremento]); 
    printf ("\n"); 
  } 
  
  
    for (incremento = 0; incremento < (tam_vector - 1); incremento++) 
    { 
        for (j = 0,i = 1 ; j <=9,i <= 9; j++,i++) 
        { 
        if (vector1[j] < vector1[i]) 
        { 
            temp = vector1[i]; 
            vector1[i] = vector1[j]; 
            vector1[j] = temp; 
        } 
    } 
  } 
  
  
  printf ("RESULTADO: \n"); 
  for (incremento = 0; incremento <= 9; incremento++) 
  { 
    printf("%d, ", vector1[incremento]); 
  } 
  

 return 0; 
}
