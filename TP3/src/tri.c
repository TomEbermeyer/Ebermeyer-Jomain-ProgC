#include <stdio.h>
#include <stdlib.h>

int echanger(int a,int b){
    int temporaire = a;
    a = b;
    b = temporaire;
    return a;
    return b;
}


int main(){
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
    //for(j=0;j<10000000;j++){
        permutation = 0;

        for(i=0;i<taille; i++){
            v1 = tableau[i];
            v2 = tableau[i+1];
            if (v1>v2){
                //echanger(tableau[i],tableau[i+1],pt_tb[i],pt_tb[i+1]);
                //c = tableau[i];
                tableau[i] = v2;
                tableau[i+1] = v1;
                permutation++;
                //printf("%i\n",c);
            }
            /*
            else{
                //echanger(tableau[i],tableau[i+1]);
                c = tableau[i];
                tableau[i] = tableau[i+1];
                tableau[i+1] = c;           
                permutation++;
                //printf("%i\n",permutation);
            }
            */
        }
    }

       


    printf("\n");
    printf("---------------------------------------------\n");
    printf("Affichage du tableau trié : \n");
    for(i=0;i<taille; i++){
        printf("%i, ",tableau[i]);
    }



return 0;
}