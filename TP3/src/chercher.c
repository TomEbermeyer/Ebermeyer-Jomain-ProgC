#include <stdio.h>
#include <stdlib.h>

//Exercice 3.4

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
            printf("Le nombre %d est dans le tableau à la position %d.\n ",nombre,i);
        }
    }



// Exercice 3.8
    char tab[10][20] = {"phrase","abc","efg","hij","wxy","azerty","bn","tre","gfdsq","bhu"};
    int taillet = 200; // Taille de tous les caractères présents dans le tableau
    char mot[1]; // L'utilisateur ne rentre qu'une lettre (ne pas oublier le caractère nul)
    int li = 0;
    int cpt = 0; // Permet de compter le nombre de fois que le mot va être présent dans le tableau
    printf("Entrer le mot à chercher :");
    scanf("%s",mot);
    printf("Letrre entré %s\n",mot);
    char *pt_tab = &tab[0][0];
    for(li=0;li<taillet;li++){
        //printf("%s\n",tab[li]);// Affiche les différents mots
        if (*(pt_tab + li) != '\0') // Evite d'avoir l'affichage des caractère null
        {
            //printf("%c",*(pt_tab + li)); // Affiche chaque lettre de chaque mot
            if (*(pt_tab +li) == mot[0]) // On prend le premier caractère pour ne pas avoir un problème de comparaison entre un string et un char
            {
               // printf("Le mot,caractère tapé %s est présent dans le tableau",mot);
               cpt++;
            }
            
        }
    }
    if (cpt != 0)
    {
        printf("Le mot,caractère tapé %s est présent %d fois dans le tableau",mot,cpt);
    }
    else
    {
        printf("Le mot,caractère tapé %s n'est PAS présent dans le tableau",mot);
    }
return 0;
}
