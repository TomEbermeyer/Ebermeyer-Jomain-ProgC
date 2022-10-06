#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int taille = 100;
    int tableau[taille];
    int* pt_tb = &tableau[0];
    int i;
    for(i=0;i<taille;i++){
        *(pt_tb+i) = rand()%100;

    }
    i =0;
    int petit = tableau[0];
    int grand = tableau[0];
    printf("Affichage du tableau\n");
    for(i=0;i<taille; i++){
        printf("%i, ",pt_tb[i]);
        if (tableau[i]<petit){
            petit = tableau[i];
        }
        if (tableau[i]>grand){
            grand = tableau[i];
        }
    }
printf("\n");    
printf("--------------------------------------------------------------------\n");
printf("Le plus petit nombre est : %i\n",petit);
printf("Le plus grand nombre est : %i\n",grand);


return 0;
}