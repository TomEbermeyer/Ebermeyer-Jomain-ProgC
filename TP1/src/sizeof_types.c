#include <stdio.h>
int main(){


printf("Affichage signé\n\n");

printf("%ld,octet pour char\n",sizeof(signed char));
printf("%ld,octet pour short\n",sizeof(signed short));
printf("%ld,octet pour int\n",sizeof(signed int));
printf("%ld,octet pour long int\n",sizeof(signed long int));
printf("%ld,octet pour long long int \n",sizeof(signed long long int));
printf("%ld,octet pour float \n",sizeof( float));
printf("%ld,octet pour double\n",sizeof( double));
printf("%ld,octet pour long double\n\n",sizeof(long double));

printf("Affichage non signé\n\n");

printf("%ld,octet pour char\n",sizeof(unsigned char));
printf("%ld,octet pour short\n",sizeof(unsigned short));
printf("%ld,octet pour int\n",sizeof(unsigned int));
printf("%ld,octet pour long int\n",sizeof(unsigned long int));
printf("%ld,octet pour long long int \n",sizeof(unsigned long long int));
printf("%ld,octet pour float \n",sizeof(float));
printf("%ld,octet pour double\n",sizeof(double));
printf("%ld,octet pour long double\n\n",sizeof(long double));

return 0;
}