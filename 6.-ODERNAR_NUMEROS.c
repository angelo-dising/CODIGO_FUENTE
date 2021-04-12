#include<stdio.h>

float numb1;
float numb2;
float numb3;

int main(){

printf("INSERTE PRIMER NUMERO A ORDENAR : ");
scanf("%f",&numb1);
printf("INSERTE SEGUNDO NUMERO A ORDENAR : ");
scanf("%f",&numb2);
printf("INSERTE TERCERO NUMERO A ORDENAR : ");
scanf("%f",&numb3);

if(numb1 < numb2 && numb1 < numb3){
if (numb2 < numb3 )
{
    printf("%f-3    ,%f-2   ,%f-1     ",numb1,numb2,numb3);

}else{

        printf("%f-3    , %f-2   , %f-1    ",numb1,numb3,numb2);
    
    }
    }
    
if(numb2 < numb1 && numb2 < numb3){
if (numb1 < numb3){
     printf("%f-3      , %f-2    , %f-1    ",numb2,numb1,numb3);
}
else{
        printf("%f-3   , %f-2   , %f-1  ",numb2,numb3,numb1);
    }



}

if (numb3 < numb1 && numb3 < numb2)
{
    if (numb1 < numb2 )
    {
        printf("%f-3   , %f-2   , %f-1  ",numb3,numb1,numb2);
    }else{
        printf("%f-3   , %f-2   , %f-1  ",numb3,numb2,numb1);
    }
    
}
    return 0;
}