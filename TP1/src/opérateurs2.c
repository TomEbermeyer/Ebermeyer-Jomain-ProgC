#include <stdio.h>
int main() {
    int num1 = 16;
    int num2 = 3;
    char op;
    printf("\nChoisissez l'option d'opération (+,-,*,/,pourcent,&,|) :");
    scanf("%c",&op);

    
    switch(op){
        case '+' :
            printf("num1+num2 = %d\n\n", num1+num2);
            break;
        case '-' :
            printf("num1-num2 = %d\n\n", num1-num2);
            break;
        case '*' :
            printf("num1*num2 = %d\n\n", num1*num2);
            break;
        case '/' :
            printf("num1/num2 = %d\n\n", num1/num2);
            break;
        case '%' :
            printf("num1 modulo num2 = %d\n\n", num1%num2);
            break;
        case '&' :
            printf("num1&num2 = %d\n\n", num1&&num2);
            break;
        case '|' :
            printf("num1|num2 = %d\n\n", num1||num2);
            break;
        case '~' :
            printf("~num1 = %d\n\n", !num1);
            break;
    }
    return 0;
}
