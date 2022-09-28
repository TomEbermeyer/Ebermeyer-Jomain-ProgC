#include <stdio.h>



int puissance(int a,int b){
    int resultat = 1;
    int i=0;
    if (b != 0){

        if (a != 0){
            for(i=0;i<b;i++){
                resultat = resultat*a;
            }
        }
        else{
            resultat=0;
        }
    }
    else{
        resultat =1;
    }

    
    return resultat;

}



int main(){
    int num1 = 2;
    int num2 = 4;
    int p = puissance(num1,num2);
    printf("Résulat de %d puissance %d = %d\n",num1,num2,p);

return 0;
}