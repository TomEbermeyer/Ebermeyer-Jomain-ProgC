#include <stdio.h>
#include "operator.h"

int main(){

    int a = 10;
    int b = 5;
    char op;
    printf("\nChoisissez l'option d'opération (+,-,*,/,pourcent,&,|,!) :");
    scanf("%c",&op);
    int sum,sous,pro,e,or,no;
    int q,r;

    switch(op){
        case '+':
            sum = somme(a,b);
            printf("\n %d   +   %d   = %d\n",a,b,sum);
            break;

        case '-':
            sous = soustraction(a,b);
            printf("\n %d   -   %d   = %d\n",a,b,sous);
            break;

        case '*':
            pro = produit(a,b);
            printf("\n %d   *   %d   = %d\n",a,b,pro);
            break;

        case '/':
            q = div(a,b);
            printf("\n %d   /   %d   = %d\n",a,b,q);
            break;

        case '%':
            r = reste(a,b);
            printf("\n %d   %   %d   = %d\n",a,b,r);
            break;   

        case '&':
            e = et(a,b);
            printf("\n %d   &&   %d   = %d\n",a,b,e);
            break;  

        case '|':
            or = ou(a,b);
            printf("\n %d   ||   %d   = %d\n",a,b,or);
            break; 

        case '!':
            no = non(a);
            printf("\n   ! %d   =   %d\n",a,no);
            break;
    }

return 0;
}

