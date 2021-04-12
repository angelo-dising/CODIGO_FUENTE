
#include <stdio.h>
#include <stdlib.h>
 
 
 
int main()
{
    unsigned int numb1;
    unsigned int numb2;
    unsigned int numb3;
    int matriz[5][5];
  int temp2;
  int temp = 0;
   int pos_y_min = 0;
    int pos_x_min = 0; 
   int pos_y_max = 0;
    int pos_x_max = 0;
    
      
        
   for (int y = 0; y < 5; y++)
   {
       for (int x = 0; x < 5; x++)
       {
           do
           {
           printf("INGRESE UN NUMERO INPAR:");
           scanf("%d",&matriz[x][y]);
           if (matriz[x][y] % 2 == 0)
           {
               printf("\nSOLO SE ADMITEN INPARES\n");
           }
           }while(matriz[x][y] % 2 == 0);
       }
   }
   
    
    for (int y = 0; y < 5; y++)
   {
       printf("\n");
       for (int x = 0; x < 5; x++)
       {
           printf("[ %d ]",matriz[x][y]);

       }
   }
   
    for (int y = 0;y < 5 ; y++)
{
    printf("\n");
    for ( int x = 0; x < 5; x++)
    {
        
        
    if (matriz[x][y] > temp) {
        temp = matriz[x][y];
    
    pos_x_max = x;
    pos_y_max = x;

    }
    }
    
}

   for (int y = 0;y < 5 ; y++)
{
    printf("\n");
    for ( int x = 0; x < 5; x++)
    {
       
        
    if (matriz[x][y] < temp2) {
        temp2 = matriz[x][y];
   
    pos_x_min = x;
    pos_y_min = x;

    }
    }
    
}

printf("\nEL NUMERO MAYOR DE LA MATRIZ ES: %d Y ESTA EN LAS COORDENADAS: x[%d] y[%d]",temp,pos_x_max,pos_y_max);
printf("\nEL NUMERO MENOR DE LA MATRIZ ES: %d Y ESTA EN LAS COORDENADAS: x[%d] y[%d]",temp2,pos_x_min,pos_y_min);
    return 0;
}