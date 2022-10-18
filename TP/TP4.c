//
// Created by Hedi OKBA on 27/09/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>


void adresseVariables() {
    char c='H';

    printf("Informations sur ma variable : \n");
    printf("\tType : char\n");
    printf("\tTaille : %d octet\n",sizeof(c));
    printf("\tContenu : %c\n",c);
    printf("\tAdresse : %p\n",&c);
}


void pointeurs() {
    int *n = (int *)malloc(sizeof(int));

    printf("Donnez un entier : ");
    scanf("%d", n);

    printf("La valeur %d est stockee a l'adresse %x ",*n,n);
    free(n);
}


void inversionVariable() {
    char prenom = 'A', nom = 'Z';

    char *p_prenom = &prenom;
    char *p_nom = &nom;

    printf("Vos initiales sont %c %c\n",prenom,nom);

    //inversion

    char tmp = *p_prenom;
    *p_prenom = *p_nom;
    *p_nom = tmp;

    printf("Vos initiales inverses sont %c %c\n",prenom,nom);
}

void sosCrash() {
    int age=23;
    int *pointeur_age=&age;

    printf("Quel est votre age ? ");
    scanf("%d",pointeur_age);

    printf("Vous avez %d ans\n",age);
}


void longueurChaine() {
    char chaine[51];
    char *p_chaine;

    /* Saisie des données */
    printf("Saisir une chaine de caractere (max 50 caracteres) :\n");
    gets(chaine);
    /* Placer P à la fin de la chaîne */
    for (p_chaine=chaine; *p_chaine; p_chaine++){

    }

    printf("La chaine \"%s\" contient %d caracteres\n", chaine, p_chaine-chaine);
}

void calculTableau() {
    int tab[50];
    int n,*p,somme=0;

    printf("Donnez le nombre d'elements (max 50) : ");
    scanf("%d",&n);

    for(p=tab; p < tab + n; p++){
        scanf("%d",p);
        somme = somme + *p;
    }

    printf("La somme des elements du tableau est : %d\n", somme);
}

int main() {
    //adresseVariables();
    //pointeurs();
    //inversionVariable();
    //sosCrash();
    //longueurChaine();
    calculTableau();

    return 0;
}
