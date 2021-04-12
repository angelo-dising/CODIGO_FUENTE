#include<stdio.h>



int x,i,matris[5][5];
int main(){


for ( x = 0 ; x < 5; x++)
{
    
for ( i = 0; i < 5; i++)
{
    printf("#-: ");
    scanf("%d",&matris[x][i]);
}
}
for (x= 0;x < 5 ; x++)
{
    for ( i = 0; i < 5; i++)
    {
        printf("[%d]\t",matris[x][i]);
    }
    
}

    return 0;

}