#include <stdio.h>
#include "operator.h"
//fichier de fonctions

int somme(int a, int b){
    //printf("oui");
    return a+b;
}

int soustraction(int a, int b){
    return a-b;
}

int produit(int a,int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

int reste(int a, int b){
    return a%b;
}

int et(int a, int b){
    return a&&b;
}

int ou(int a, int b){
    return a||b;
}

int non(int a){
    return !a;
}

