#include <stdio.h>
#include <stdlib.h>


int main(){
    int taille = 100;
    int tableau[taille];
    int* pt_tb = &tableau[0];
    int i;

    for(i=0;i<taille;i++){
        *(pt_tb+i) = rand()%100;
    }
    printf("Affichage du tableau non trié : \n");
    for(i=0;i<taille; i++){
        printf("%i, ",tableau[i]);
    }
    int nombre;
    printf("\n");
    printf("Entrer le nombre à chercher :");
    scanf("%d",&nombre); 

    i=0;
    for(i=0;i<taille;i++){
        if (nombre == tableau[i]){
            printf("\nentier présent\n\n");
            break;
        }
    }


return 0;
}