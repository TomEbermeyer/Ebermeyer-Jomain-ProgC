
#include <stdio.h>
/*
Méthode
A ce stade on ne connait pas encore les tableaux donc on ne peut pas stoquer les valeurs de bits
On va devoir fonctionner à l'envers et commencé par la puissance de 2 maximale
*/

int main() {
    int nombre;
    printf("Entrer le nomre a convertir :");
    scanf("%i",&nombre);
    int taille=sizeof(nombre)*8; //taille en bits tenu par le nombre qui est un int : 32 bits
    int k =0;
    int masque=1; //puissance de 2
    int res=0;
    int i=0;
    for (k=taille-1;k>=0;k--){
        masque=1;  // Permet de réinitiliser 
        for (i=0;i<k;i++){
        masque=masque*2;
        }
        res=nombre-masque;
        if (res>=0){
        printf("1");
        nombre = res; //Cela signifie que cette puissance de 2 va rentrer dasn l'addition des puissances de 2
        }
        else{
        printf("0"); // Permet de gérer les cas ou la puissance de 2 est trop grande et lorsque qu'elle ne convient pas dans la somme
        }
  }
return 0;    
}



