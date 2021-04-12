#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    srand(time(NULL));

int matr [5][5];
int matr2 [5][5];
int matr3[5][5];
int all_1;
int all_2;
printf("MATRIS 1 :");



//LLENADO DE LA PRIMERA MATRIS
for (int y = 0; y < 5; y++)
{
    printf("\n");
for (int x = 0; x < 5; x++)
{   
matr[x][y] = rand() % 26;
    printf(" [%d] ",matr[x][y]);
}
}
//FIN DEL LLENADO DE LA PRIMERA MATRIS




printf("\nMATRIS 2 :");
//LLENADO DE LA SEGUNDA MATRIS:
for (int y = 0; y < 5; y++)
{
    printf("\n");
for (int x = 0; x < 5; x++)
{   
matr2[x][y] = rand() % 26;
    printf(" [%d] ",matr2[x][y]);
}
}
//FIN DE EL LLENADO DE LA SEUNDA MATRIS


//MULTIPLICACION DE LAS MATRICES:
for (int y = 0,y1 = 0,y2 = 4 ; y < 5; y++,y1++,y2--)
{
    printf("\n");
    for (int x = 0,x1=0, x2 = 4; x < 5; x++,x2--)
    {
        matr3[x][y] = matr[x][y] * matr2[x2][y2];
    }
}

for (int y = 0; y < 5; y++)
{
    printf("\n");
    for (int x = 0; x < 5; x++)
    {
        printf(" [%d] ",matr3[x][y]);
    }
    
}








    return 0;
}