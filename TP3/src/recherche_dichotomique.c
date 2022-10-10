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
    printf("Affichage du tableau non trié : \n");
    for(i=0;i<taille; i++){
        printf("%i, ",tableau[i]);
    }

    int permutation = 1;
    int c;
    int j;
    int v1;
    int v2;
    while (permutation != 0){
        permutation = 0;

        for(i=0;i<taille; i++){
            v1 = tableau[i];
            v2 = tableau[i+1];
            if (v1>v2){
                tableau[i] = v2;
                tableau[i+1] = v1;
                permutation++;
            }
        }
    }


    printf("\n");
    printf("---------------------------------------------\n");
    printf("Affichage du tableau trié : \n");
    for(i=0;i<taille; i++){
        printf("%i, ",tableau[i]);
    }

    

    int nombre;
    printf("\n");
    printf("Entrer le nombre à chercher :");
    scanf("%d",&nombre);

    //RECHERCHE DICHOTOMETRIE
  
    int trouver = 0;
    int debut = 0;
    int fin = taille;
    int milieu = tableau[taille/2];

    //a = (int)4.5 exemple de partie entière 
    // Algo de la page wikipédia https://fr.wikipedia.org/wiki/Recherche_dichotomique

    while (trouver != 1 & debut<=fin){
        milieu = (int)((debut+fin)/2);
        if (tableau[milieu]==nombre){
            trouver =1;
        }
        else{
            if(nombre >tableau[milieu]){
                debut = milieu +1;
            }
            else{
                fin = milieu -1;
            }
        }


    }
    if (trouver == 1){
        printf("TOUVER \n");
    }


return 0;
}