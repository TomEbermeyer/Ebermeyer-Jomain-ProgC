#include <stdio.h> 

int main() {
// calcul de l'aire d'un cercle 
//int rayon = 4;

float rayon;
printf("Entrer le rayon :");
scanf("%e",&rayon);

float aire = 3.1415*rayon*rayon;
float peri = 2*3.1415*rayon;

printf("L'aire du cercle est %f\n",aire);
printf("Le périmètre du cercle est %f\n",peri);

return 0;
}


