#include <stdio.h>



int recurence(int a,int b,int c){
    int i = 0;
    int res =0;

    for (i=0;i<c;i++){
        res = a + b;
        b=a;     //Trouver en écrivant les premiers termes de la suite à la main
        a =res;
        printf("%d, ",res);
        

    }
    
    return res;

}



int main(){
    int U0 = 0;
    int U1 = 1;
    int n = 20;
    printf("La suite de Fibonacci de %d termes est :\n",n);
    int suite = recurence(U0,U1,n);


return 0;
}