#include <stdio.h>

int main(){
int cpt = 0;


for(cpt = 0;cpt<11;cpt++){
    int i = 0; // Bien mettre dans le for sinon la valeur de i ne change pas dans le second while
    if (cpt == 0 || cpt == 1 || cpt == 10){
        while(i < cpt){
            printf("*");
            i++;
        }
    printf("\n");

    }
    else{
        printf("*");
        while(i < cpt-2){
            printf("#");
            i++;
        } 
        printf("*")  ; 
    printf("\n");    
    }

    
}


return 0;
}