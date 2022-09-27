#include <stdio.h>

int sumch(char a[]){
    int cpt =0;
    while(a[cpt] != '\0'){ // \0 valeur nulle donc pas de lettre
        cpt++;
    }
    return cpt;

}

char copie(char message[],char messagecopier[]){
    int cpt=0;
    while(message[cpt] != '\0'){
        messagecopier[cpt]=message[cpt];
        cpt++;
    }
    messagecopier[cpt]='\0';    //Permet d'éffacer l'apparation de caractère avec des petittes chaine de caractères.
    return cpt;

}

char conca(char a[],char b[],char t[]){
    
    int i = 0;
    int taille1=sumch(a);
    int taille2=sumch(b);
    
    while(i < taille1){
        t[i]= a[i];
        i++;
        
    }
    while(i < taille1+taille2){
        t[i]= b[i-taille1];
        i++;
        
    } 
    return i;
    
    

   
}





int main(){

    char message[]="Bonsoir";
    char message2[]="Paris";
    int res = sumch(message);
    printf("La chaine %s fait %d de long.\n",message,res);

    int taille1=sumch(message);
    int taille2=sumch(message2);
    char t[taille1+taille2];
    
    
    char messagecopier[taille1];
    copie(message,messagecopier);
    printf("La copie de message %s dans un char vide est :\n",message);
    printf("%s\n",messagecopier);



    int sum = conca(message,message2,t);
    printf("La concaténation de message %s avec %s est :\n",message,message2);
    printf("%s\n",t);





return 0;
}