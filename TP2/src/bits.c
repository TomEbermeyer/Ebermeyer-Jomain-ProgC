#include <stdio.h> // headers
int main(){
  
  int tab[50], nbr, i;  // La taille du tableau permet de calculer des plus gros nombres lorsqu'on l'augmente
  
  printf("Entrez le nombre à convertir: ");  // On demande un nombre à convertir
  scanf("%d",&nbr);  
  
  for(i=0; nbr > 0; i++)  // On parcourt chaque puissance de 2 du futur chiffre binaire
  {  
    tab[i] = nbr%2;  // On stock le résulatat de la division euclidienne dans un tableau 
    nbr = nbr/2;  // On divise le nombre par 2 pour parcourir chaque puissance de 2 
  } 
  printf("Taille en bit du nombre convertit : %i",i);
  printf("\nLe nombre binaire est : ");
  int b = i-4; // Utile pour le 4 ème bit
  int c = i-20; // Utile pour situer la position du 20eme bit
  int res4;
  int res20;
  int mask = 1;
  int verif = i; // On verifie si le nombre fait plus de 20 bits pour l'affichage
 
  for(i=i-1; i >= 0; i--)  // On retourne la suite pour obtenir le nombre en binaire
  {
    if(i == b){
        res4 = tab[i]&mask; //Valeur du 4 eme bit
    }
    if(i == c){
        res20 = tab[i]&mask; // Valeur du 20 eme bit
    }
    printf("%d",tab[i]);  
  } 
  printf("\n");
  printf("La valeur du 4 ème bit est : %i\n",res4);
  if(verif<20){                                       // On regarde si le 20 eme bit existe 
    printf("C'est un nombre à moins de 20 bits\n");
  }
  if(verif>20){
  printf("La valeur du 20 ème bit est : %i\n",res20);}
  return 0;
}