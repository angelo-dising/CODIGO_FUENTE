#include<stdio.h>
#include<string.h>

int main() {
    char frase[100];
    char rep_[100];
    char temp[100];
    char pal;
    int long_;
    int i;
    int j;
    int inicio;
    int acertado=0;
    int tempo=0;
    int intentos=5;
    int repetido=0;
    int win=0;
   
    printf("\tAOURCADOS\n");
    printf("INGRESE SU PALABRA (NO MAS DE 100 CARACTERES): ");
    gets(frase);
   
    
   
    long_ = 0;
    inicio = 0;
    j = 0;
   
    rep_[0] = ' ';
    rep_[1] = '\0';
   
   
    do {
                
        tempo=0;
   
        if(inicio == 0) {
         for(i=0;i<strlen(frase);i++) {
          if(frase[i] == ' ') {
            temp[i] = ' ';
             long_++;
          }
          else {
             temp[i] = '_';       
             long_++;
          }
         }
        }
   
        inicio = 1;
       
        temp[long_] = '\0';
       
        for(i=0;i<strlen(rep_);i++) {
           if(rep_[i] == pal) {
            repetido = 1;
            break;
          }
          else {
           repetido = 0;
         }
        }
       
        if(repetido == 0) {
         for(i=0;i<strlen(frase);i++) {
                    if(frase[i] == pal) {
             temp[i] = pal;
              acertado++;
              tempo=1;
            }
          }
        }
       
        if(repetido == 0) {
         if(tempo == 0) {
           intentos = intentos - 1;
         }
        }
        else {
         printf("YA PUSISTE ESA LETRA :) \n\n");
         
        }
       
        printf("\n");
       
        for(i=0;i<strlen(temp);i++) {
      
         printf(" %c ",temp[i]);
        }
       
        printf("\n");
       
        if(strcmp(frase,temp) == 0) {
            win = 1;
            break;
        }
        printf("\nACERTASTE: %d",acertado);
        printf("\nTEQUEDAN: %d\n",intentos);
        rep_[j] = pal;
        j++;
        if (intentos==0)
        {
           break;
        }
        printf("INGRESA TU LETRA::");
        scanf("\n%c",&pal);
    }while(intentos != 0);
    if(win) {
              
        printf("\nGANASTE!!!!!!!!!");
    }
    else {
            
        printf("\nPERDISTE :(");
    }
   
    printf("\n\n");
    
    return 0;

} 
