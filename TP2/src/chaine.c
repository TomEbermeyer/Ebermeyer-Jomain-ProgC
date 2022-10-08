#include <stdio.h>


// A noter : il ne faut pas initialiser les mots au sein des fonctions car ils doivent être générer au début du programme.
int sumch(char a[]){
    int cpt =0;
    while(a[cpt] != '\0'){ // \0 valeur nulle donc pas de lettre donc on arrête de compter.
        cpt++;
    }
    return cpt;

}

char copie(char message[],char messagecopier[]){
    int cpt=0;
    while(message[cpt] != '\0'){
        messagecopier[cpt]=message[cpt];  //ajout de chaque caractère dans un autre tableau vide
        cpt++;
    }
    messagecopier[cpt]='\0';    //Permet d'éffacer l'apparation de caractère avec des petites chaine de caractères.
    return cpt;

}

char conca(char a[],char b[],char t[]){
    
    int i = 0;
    int taille1=sumch(a);
    int taille2=sumch(b);
    
    while(i < taille1){
        t[i]= a[i];//on ajoute le mot a
        i++;
        
    }
    while(i < taille1+taille2){
        t[i]= b[i-taille1];  // on ajoute le mot b 
        i++;
        
    } 
    return i;
    //On aurait pu ajouter tout en une seule fois.
    
    

   
}





int main(){

    char message[]="Bonsoir"; //Création des mots avec des tableaux de char
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