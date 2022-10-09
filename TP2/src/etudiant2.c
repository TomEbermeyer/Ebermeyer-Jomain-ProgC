#include <stdio.h> // headers
#include <string.h>
int main()
{
    // On initialise les différentes structures qui vont contenir les paramètres de l'adresse d'un étudiant (rue,ville, numéro de la rue) ou encore ses notes aux différents modules.	
    struct adresse
    {
        char rue[30];
        char ville[30]; // On fixe la longueur du tableau à 30 et donc on limite le nombre de caractères à 30
        char Nrue[10];
    };

    struct module
    {
        int NoteprogC;
        int NoteSysExploitation;
    };

    struct etudiant	// Structure dans une structure qui va donc contenir toutes les onfprmations d'un étudiant
    {
        char nom[30];
        char prenom[30];
        struct adresse adresse;
        struct module module;
        short int notes;
    };

    struct etudiant etudiant_cpe[110];	// On définit le nombre d'étudiants (110)
    // On ajoute nos étudiants les informations de nos différents étudiants au bon endroit dans la structure
    strcpy(etudiant_cpe[0].prenom, "Baptiste");
    strcpy(etudiant_cpe[0].nom, "Exbrayat");
    strcpy(etudiant_cpe[0].adresse.Nrue, "22");
    strcpy(etudiant_cpe[0].adresse.rue, "jean jores");
    strcpy(etudiant_cpe[0].adresse.ville, "Villeurbanne");
    etudiant_cpe[0].module.NoteprogC = 19;
    etudiant_cpe[0].module.NoteSysExploitation = 18;

    strcpy(etudiant_cpe[1].prenom, "Ben");
    strcpy(etudiant_cpe[1].nom, "Jo");
    strcpy(etudiant_cpe[1].adresse.Nrue, "23");
    strcpy(etudiant_cpe[1].adresse.rue, "jean mermoz");
    strcpy(etudiant_cpe[1].adresse.ville, "beaune");
    etudiant_cpe[1].module.NoteprogC = 19;
    etudiant_cpe[1].module.NoteSysExploitation = 18;

    strcpy(etudiant_cpe[2].prenom, "Tom");
    strcpy(etudiant_cpe[2].nom, "Ebermeyer");
    strcpy(etudiant_cpe[2].adresse.Nrue, "4");
    strcpy(etudiant_cpe[2].adresse.rue, "jean moule");
    strcpy(etudiant_cpe[2].adresse.ville, "Villeurbanne");
    etudiant_cpe[2].module.NoteprogC = 20;
    etudiant_cpe[2].module.NoteSysExploitation = 10;

    strcpy(etudiant_cpe[3].prenom, "Tristan");
    strcpy(etudiant_cpe[3].nom, "Imbert");
    strcpy(etudiant_cpe[3].adresse.Nrue, "2");
    strcpy(etudiant_cpe[3].adresse.rue, "jean guichard");
    strcpy(etudiant_cpe[3].adresse.ville, "Lyon");
    etudiant_cpe[3].module.NoteprogC = 19;
    etudiant_cpe[3].module.NoteSysExploitation = 18;

    strcpy(etudiant_cpe[4].prenom, "Maathis");
    strcpy(etudiant_cpe[4].nom, "nenach");
    strcpy(etudiant_cpe[4].adresse.Nrue, "222");
    strcpy(etudiant_cpe[4].adresse.rue, "croix");
    strcpy(etudiant_cpe[4].adresse.ville, "Lyon");
    etudiant_cpe[4].module.NoteprogC = 12;
    etudiant_cpe[4].module.NoteSysExploitation = 17;
    int i;
    // On affiche les informations des différents étudiants avec la boucle for ou i coreespond à chaque étudiant.
    for (i = 0; i < 5; i++)
    {
        printf("Je suis %s %s, j'habite %s rue %s à %s ,j'ai eu en ProgC %d et j'ai obtenu en Système d'exploitation %d \n ", etudiant_cpe[i].prenom, etudiant_cpe[i].nom, etudiant_cpe[i].adresse.Nrue, etudiant_cpe[i].adresse.rue, etudiant_cpe[i].adresse.ville, etudiant_cpe[i].module.NoteprogC,etudiant_cpe[i].module.NoteSysExploitation);
    }
    return 0;
};
