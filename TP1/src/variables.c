#include <stdio.h>
int main(){

signed char cara = 't';
signed short court = -5;
signed int entier = 50;
signed long int nbl = 10000L;
signed long long int nbll = 2000000LL;
float pi = 3.14;
double l = 3.14E3;
long double ll = 3.18E10L;


printf("Affichage signé\n\n");

printf("%ld,octet pour char\n",sizeof(cara));
printf("%ld,octet pour short\n",sizeof(court));
printf("%ld,octet pour int\n",sizeof(entier));
printf("%ld,octet pour long int\n",sizeof(nbl));
printf("%ld,octet pour long long int \n\n",sizeof(nbll));

printf("Affichage non signé\n\n");

unsigned char cara1 = 't';
unsigned short court1 = -5;
unsigned int entier1 = 50;
unsigned long int nbl1 = 10000L;
unsigned long long int nbll1 = 2000000LL;


printf("%ld,octet pour char\n",sizeof(cara1));
printf("%ld,octet pour short\n",sizeof(court1));
printf("%ld,octet pour int\n",sizeof(entier1));
printf("%ld,octet pour long int\n",sizeof(nbl1));
printf("%ld,octet pour long long int \n\n",sizeof(nbll1));


printf("Affichage pour ceux qui n'ont pas de signe\n\n");
printf("%ld,octet pour float \n",sizeof(pi));
printf("%ld,octet pour double\n",sizeof(l));
printf("%ld,octet pour long double\n\n",sizeof(ll));

return 0;
}