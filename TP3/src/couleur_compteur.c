#include <stdio.h>
#include <stdlib.h>
#include <time.h>



struct RGBA {
    int R;
    int G;
    int B;
    int A;
    int C; //compteur pour chaque couleur
};

int main() {
    srand(time(NULL));    
    struct RGBA c0 = {0x1f,0xfa,0x10,0x20,0};
    struct RGBA c1 = {0x2f,0xfb,0x11,0x21,0};
    struct RGBA c2 = {0x3f,0xfc,0x12,0x22,0};
    struct RGBA c3 = {0x4f,0xfd,0x13,0x23,0};
    struct RGBA c4 = {0x5f,0xfe,0x14,0x24,0};
    struct RGBA c5 = {0x6f,0xff,0x15,0x25,0};
    struct RGBA c6 = {0x7f,0xf1,0x16,0x26,0};
    struct RGBA c7 = {0x8f,0xf2,0x17,0x27,0};
    struct RGBA c8 = {0x9f,0xf3,0x18,0x28,0};
    struct RGBA c9 = {0xaf,0xf4,0x19,0x29,0};
    
    struct RGBA couleurs []={c0,c1,c2,c3,c4,c5,c6,c7,c8,c9};
    int taille = 100;
    int tableau[4*100];
    

    //On remplit le tableau de la façon suivant : [couleur1.R,couleurs1.G,couleur1.B,couleur1.A,couleur2.R, ...] Donc de 4 en 4.
    int d;
    int i;
    for(i = 0;i<400;i=i+4){
        d = rand()%9; // entre 0 et 9
        tableau[i] = couleurs[d].R;
        tableau[i+1] = couleurs[d].G;
        tableau[i+2] = couleurs[d].B;
        tableau[i+3] = couleurs[d].A;

    }
    i = 0;
    int j;
    for(i = 0;i<400;i=i+4){
        for(j=0;j<10;j++){
            if(tableau[i]==couleurs[j].R &tableau[i+1]==couleurs[j].G &tableau[i+2]==couleurs[j].B &tableau[i+3]==couleurs[j].A){
                couleurs[j].C += 1;
            }

        }

    } 
    /*
    AFFICHAGE EVENTUEL DU TABLEAU
    i = 0;
    for(int i = 0;i<400;i++){
        printf("%x, ",tableau[i]);     
    }
    */
    printf("\n\n");
    i=0;
    for(int i = 0;i<=9;i++){
        printf("%x %x %x %d  %d \n ",couleurs[i].R,couleurs[i].G,couleurs[i].B,couleurs[i].A,couleurs[i].C);     
    }

    



return 0;
}