#include<stdio.h>
#include<string.h>



int main(){
char LTR1[2];
char LTR2[2];
char LTR3[2];
printf("\nINGRESE LETRA 1:");
scanf("%s",LTR1);
printf("%s",LTR1);

printf("\nINGRESE LETRA 2:");
scanf("%s",LTR2);
printf("%s",LTR2);

printf("\nINGRESE LETRA 3:");
scanf("%s",LTR3);
printf("%s",LTR3);

if (strcmp( LTR1, LTR2) == 0)
{
    printf("\nLA LETRA 1 ES IGUAL A LA LETRA 2");
}
if (strcmp( LTR1, LTR3) == 0)
{
    printf("\nLA LETRA 1 ES IGUAL A LA LETRA 3");
}
if (strcmp( LTR2, LTR3) == 0)
{
    printf("\nLA LETRA 2 ES IGUAL LA LETRA 3");
}

printf("\nLAS LETRAS SON %s %s %s",LTR1,LTR2, LTR3);

    return 0;
}