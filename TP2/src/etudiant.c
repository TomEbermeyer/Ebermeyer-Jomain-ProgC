#include <stdio.h> // headers
#include <string.h>
int main(){
    // Initialisation  tableau (5 informations à traiter donc 5 tableaux)
    int etu = 5; // Nombre d'étudiants
    // On initialise les différents tableaux contenant les différentes données
    char tabN[][20] = {"Exbrayat","Imbert","Nenach","Jomain","Lenet"};
    char tabP[][20] = {"Baptiste","Tristan","Mathis","Benoît","Flavy"};
    char tabR[][20] = {"jean jaures","guichard","croix rousse","Emile Zola","jean charles"};
    int tabProg[] = {12,11,14,15,17};
    int tabSys[] = {11,14,17,18,19};
    // On parcourt chaque tableau où l'indice correspond i correspond à un étudiant	
    for(int i=0;i<etu;i++){
        printf("Je suis %s %s, j'habite rue %s et j'ai %d en ProgC et %d en Système d'exploitation. \n",tabP[i],tabN[i],tabR[i],tabProg[i],tabSys[i]);
    } 
}

