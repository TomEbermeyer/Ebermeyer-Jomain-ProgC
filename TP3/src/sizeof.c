#include <stdio.h>


int main(){
    printf("Tailles en octet transféré\n");
    printf("taille de int : %lu\n",sizeof (int));
    printf("taille de int** : %lu\n",sizeof (int**));
    printf("taille de char* : %lu\n",sizeof (char*));
    printf("taille de char** : %lu\n",sizeof (char **));
    printf("taille de char *** : %lu\n",sizeof (char ***));
    printf("taille de float * : %lu\n",sizeof (float *));
    printf("taille de float ** : %lu\n",sizeof (float **));
    printf("taille de float ***: %lu\n",sizeof (float ***));


return 0; 
}