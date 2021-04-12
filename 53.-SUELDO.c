#include<stdio.h>




int main(){


int sal[20];
int cuenta = 20;
int max_sal = 0;
int min_sal = 0;

for (int i = 0; i < cuenta; i++)
{
    printf("INGRESE EL SALARIO DE LA PESONA %d;",i);
    scanf("%d",&sal[i]);
}


for (int i = 0; i < cuenta; i++)
{
    if (sal[i] > 3000)
    {
    max_sal++;
    }
    else if(sal[i] < 3000)
    {
    min_sal++;
    }
}
printf("\nHAY %d SALARIOS MAYORES A 3000:",max_sal);
printf("\nHAY %d SALARIOS MENORES A 3000:",min_sal);



    return 0;
}