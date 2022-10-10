#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Exercice 3.4

int main(){
    //Exercice 3.4


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




    /*
    char tab[10][20] = {"phrase","abc","efg","hij","wxy","azerty","bn","tre","gfdsq","bhu"};
    int taillet = 200; // Taille de tous les caractères présents dans le tableau
    char mot[1]; // L'utilisateur ne rentre qu'une lettre (ne pas oublier le caractère nul)
    int li = 0;
    int cpt = 0; // Permet de compter le nombre de fois que le mot va être présent dans le tableau
    printf("Entrer le mot à chercher :");
    scanf("%s",mot);
    printf("Letrre entré %s\n",mot);
    char *pt_tab = &tab[0][0];
    for(li;li<taillet;li++){
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
*/

    // COPIE COLLE A PARTIR D ICI ET FAIS ATTENTION A PAS TE FAIRE AVOIR AVEC LA DERNIERE {
    //Exercice 3.8 
    char tabP[10][40] = {
        "Le code fonctionne",
        "La voiture est belle",
        "Il fait chaud",
        "Il fait beau",
        "L'ordinateur est puissant",
        "Le tableau est magnifique",
        "J'aime la viande",
        "On est dimanche",
        "Le soleil est jaune",
        "C'est la fin"};
    int tt = sizeof(tabP); // Taille du tableau 
    int motOK = 0; // Pour gérer l'affichage lorsqu'on est dans le cas ou il y a pas le mot dans tabP

    // Demander à l'utilisateur quel mot il cherche (mot limité à 20 caractères)
    char chercher[20];
    printf("Entrer le mot à chercher : ");
    scanf("%s",chercher);
    //printf("Mot entré %s\n",chercher);

    
    char *pt_tabP = &tabP[0][0];    // Pointeur du tableau 
    int TailleMot = strlen(chercher); // Taille du mot que l'utilisateur a saisi
    //printf(" \nLe mot a cherché est composé de %d caaractères \n",TailleMot);

    //Vérification de la présence du mot
    for (int i = 0; i < tt; i++)    //On parcourt chaque caractère de notre tableau
    {
        int cptLettreVerif = 0;     // Compteur 
        //printf("%c",*(pt_tabP + i)); // Affiche chaque lettre de chaque mot
        if(*(pt_tabP + i) == chercher[0]) // On regarde si l'un des char est égal à notre 1 ere lettre du mot chercher
        {
            for (int lettre = 1; lettre < TailleMot; lettre++)
            {
                if (*(pt_tabP + i + lettre) == chercher[lettre])
                {
                    cptLettreVerif++; // S'incrémente à chaque fois que la lettre suivante du mot est bonne
                    //printf("lettre = %c",*(pt_tabP + i+ lettre));
                }
            //printf("cpt = %d\n",cptLettreVerif);
            }

        // Condition qui va permettre de savoir si toutes les lettres du mot cherché sont présentes.
        if(cptLettreVerif == TailleMot - 1) //On enlève 1 car notre compteur prend en compte les lettres après la 1 ère
        {
            motOK ++;
        }
        }
    }
    // Gestion de l'affichage
    if (motOK == 0)
    {
        printf("Le mot %s n'est PAS présent dans les phrases du tableau\n",chercher);
    }
    else
    {
        printf("Le mot %s est présent %d fois dans les phrases du tableau\n",chercher,motOK);
    }
    
return 0;
}
