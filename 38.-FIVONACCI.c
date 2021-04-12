#include<stdio.h>

int main (){
  long int a = 1;
  long int b = 0;
  int i;
    int max;

    printf("CAUNTOS NUMEROS DESEA MOSTAR? :");
    scanf("%d",&max);
  for(i = 0; i < max; i++){

    printf("%d\n",b);
    
    printf("%d\n",a);
    b = b + a;
    a = a + b;
  }
  return 0;
}
