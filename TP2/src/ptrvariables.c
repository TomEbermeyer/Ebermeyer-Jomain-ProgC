#include <stdio.h>


int main(){

char car;
short court;
int  entier;
long int entierl;
long long int entierll;
float virg;
double doble;
long double doblel;


* &(car) = 't';
* &(court) = 12;
* &(entier) = 38;
* &(entierl) = 480000L;
* &(entierll) = 5800000LL;
* &(virg) = 28.12;
* &(doble) = 1.45;
* &(doblel) = 285.456L;


//Affichage
printf("---------------------------------------------------------\n");
printf("L'adresse de char est %p et sa valeure est %c\n",&car,car);
printf("L'adresse de short est %p et sa valeure est %hd\n",&court,court);
printf("L'adresse de int est %p et sa valeure est %i\n",&entier,entier);
printf("L'adresse de long int est %p et sa valeure est %ld\n",&entierl,entierl);
printf("L'adresse de long long int est %p et sa valeure est %lld\n",&entierll,entierll);
printf("L'adresse de float est %p et sa valeure est %f\n",&virg,virg);
printf("L'adresse de double est %p et sa valeure est %lf\n",&doble,doble);
printf("L'adresse de long double est %p et sa valeure est %Lf\n",&doble,doblel);
printf("---------------------------------------------------------\n");




return 0;
}