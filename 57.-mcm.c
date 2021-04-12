
#include <stdio.h>
#include <stdlib.h>
 
 
int MAX(int a,int b)
{

    if(a>b){
        return a;
        }
        else
        {

        return b;
        
        }
}
 
int main()
{
    unsigned int numb1;
    unsigned int numb2;
    unsigned int numb3;
    int mcm;
    int contador = 0;
    int cociente = 0;
    int divisor = 1;
    
      
        
   do {    
    printf("INGRESA EL NUMERO 1 ");
        scanf("%d",&numb1);
   
        if (numb1 > 99999){
        printf("NO PUEDES PONER MAS DE 5 DIGITOS");
        numb1 = 0;
        }

    }while(numb1 > 99999);
    

    do {    
    printf("INGRESA EL NUMERO 2 ");
        scanf("%d",&numb2);
   
        if (numb2 > 99999){
        printf("NO PUEDES PONER MAS DE 5 DIGITOS");
        numb2 = 0;
    
        }

    }while(numb1 > 99999);
    
do {    
    printf("INGRESA EL NUMERO 3 ");
        scanf("%d",&numb3);
   
        if (numb3 > 99999){
        printf("NO PUEDES PONER MAS DE 5 DIGITOS\n");
        numb3 = 0;
    
        }
    }while(numb1 > 99999);
    

    
    
    mcm = MAX(numb1,numb2);
    mcm = MAX(mcm,numb3);
 
    while(mcm%numb1!=0||mcm%numb2!=0||mcm%numb3!=0)
    {
        mcm++;
    }
 
    printf("EL MINIMO COMUN DIGITO ES: %d",mcm);
 
    return 0;
}