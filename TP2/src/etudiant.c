#include <stdio.h>


int main(){
    char etudiant[5][5][200];

    char nom1[] = "Ebermeyer";
    char * pt_nom = &etudiant[1][1][200-sizeof(nom1)];
    int k;
    for (k=0;k<sizeof(nom1);k++)
        *(pt_nom+k) = nom1[k];
    printf("%s",etudiant[1][1]);




return 0;
}