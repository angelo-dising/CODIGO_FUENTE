#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    
srand(time(NULL));
int count = 24;
int vector[5][5];


for( int x = 0; x < count; x++){
    for (int y = 0; y < count; y++)
    {

        vector[x][y] = rand() % 6;
    }    
}

printf("\nMATRIS ORIGINAL\n");

for (int x = 0; x < 5 ; x++)
{
    printf("\n");

    for (int  y = 0; y < 5; y++)
    {
        printf("[%d] ",vector[y][x]);
    }
    
}

printf("\n TRASPUESTA \n");

for (int x = 0; x < 5; x++)
{
    printf("\n");
for ( int y = 0; y < 5; y++)
{
    printf("[%d] ",vector[x][y]);
}
    
}







    return 0;
}