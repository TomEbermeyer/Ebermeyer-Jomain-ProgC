#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));
    int taille = 10;
    int tb_entier[taille];
    float tb_float[taille];

    int* pt_int = &tb_entier[0];
    float* pt_float = &tb_float[0];
    int i;

    for(i=0;i<taille; i++){
        *(pt_int+i) = rand() % 100; //nb aléaltoire entre 1 et 99
        *(pt_float+i) = rand() % 100;

        if(i%2 ==0 ){
            *(pt_int+i) = *(pt_int+i) * 3;
            *(pt_float+i) = *(pt_float+i) * 3;

        }
    }


//On vérifie l'affichage.
    printf("Affchage du tableau de int : \n");
    for(i=0;i<taille; i++){
        printf("%i, ",pt_int[i]);
    }
        printf("\n");    
        printf("=============================================================\n");
    printf("Affchage du tableau de float : \n");
    for(i=0;i<taille; i++){    
        printf("%f, ",pt_float[i]);
    }





return 0;
}