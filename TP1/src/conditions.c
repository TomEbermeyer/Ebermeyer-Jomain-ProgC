#include <stdio.h>

int main(){

int nombre = 1000;
int cpt = 0;

printf("\n");
printf("Les noombres <1000 et divisibles par 2 et par 15 sont :");
for(cpt = 0;cpt<nombre;cpt++){
    if(cpt%2 == 0 & cpt%15 == 0){
        printf("%i, ",cpt);
    }

}

printf("\n");
cpt = 0;

printf("Les noombres <1000 et divisibles par 103 ou par 107 sont :");

    do{
        
        cpt += 1;
        if(cpt%103==0 || cpt%107==0){
            printf("%i, ",cpt);
        }
    }while(cpt<nombre);

    printf("\n");
    
printf("Les nombres <1000 divisbles par 5 ou 7 mais pas par 3 sont :");
int cpt2 = 0;
    while(cpt2<1000){
        if(cpt2%7 == 0 || cpt2%5 ==0){
            if(cpt2%3 !=0){
                printf("%i,",cpt2);
                printf("oui");
            }

        }
        cpt2++;
    }

return 0; 
}