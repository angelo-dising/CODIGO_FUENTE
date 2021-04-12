#include <stdio.h>

int main()
{
  
    int ress = 0;
    int Fac;

  
    printf("INTRODUSCA EL NUMERO QUE DESEA OBTENER EL FACTORIAL: ");
    scanf(" %d", &Fac);
  
    ress = 1;
    while(Fac > 1) {
       ress *= Fac;
       Fac--;
    }


    printf("RESULTADO %d\n",ress);

  
  return 0;
}