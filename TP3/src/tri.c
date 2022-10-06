#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int echanger(int* pt_tb,int i, int tableau[]){
    int tempo;
    tempo = tableau[i+1];
    *(pt_tb+i+1) = tableau[i];
    *(pt_tb+i)=tempo;
    return 0;
}


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
    printf("Affichage du tableau non trié : \n");
    for(i=0;i<taille; i++){
        printf("%i, ",tableau[i]);
    }

    int permutation = 1;
    while (permutation != 0){
        permutation = 0;
        for(i=0;i<taille; i++){
            if (tableau[i]>tableau[i+1]){  
                echanger(pt_tb,i,tableau);
                permutation++;
            }
        }
    }

       
    printf("\n---------------------------------------------\n");
    printf("Affichage du tableau trié : \n");
    for(i=0;i<taille; i++){
        printf("%i, ",tableau[i]);
    }



return 0;
}