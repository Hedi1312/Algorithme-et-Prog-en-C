//
// Created by Hedi OKBA on 19/09/2022.
//


#include <stdio.h>
#include <stdlib.h>

void majorite() {
    int age;

    printf("Entrez votre age : ");
    scanf("%d",&age);

    if (age >=18) {
        printf("Vous etes majeur");
    }
    else {
        printf("Vous n'etes pas majeur");
    }
}

void compteARebour() {
    int n;

    printf("Entrez un nombre entier pour un compte a rebours : ");
    scanf("%d",&n);
    for (int i = n; i >= 0; i--) {
        printf("\t%d\n",i);
    }
}


void comparaisonDeNombres() {
    int a,b;

    printf("Entrez deux nombres : ");
    scanf("%d %d",&a,&b);

    printf("\tNombre 1 : %d",a);
    printf("\n\tNombre 2 : %d\n",b);

    if (a==b) {
        printf("\nLes deux nombres sont egaux");
    }
    else {
        printf("\nLes nombres sont differents");
        if (a>b) {
            printf("\nLe nombre %d est superieur au nombre %d de %d",a,b,a-b);
        }
        printf("\nLe nombre %d est superieur au nombre %d de %d",b,a,b-a);
    }
}

void joursDeLaSemaine() {
    int j;

    printf("Donnez un numero de jour de la semaine : ");
    scanf("%d",&j);

    switch (j) {
        case 1:
            printf("%d - Lundi",j);
            break;
        case 2:
            printf("%d - Mardi",j);
            break;
        case 3:
            printf("%d - Mercredi",j);
            break;
        case 4:
            printf("%d - Jeudi",j);
            break;
        case 5:
            printf("%d - Vendredi",j);
            break;
        case 6:
            printf("%d - Samedi",j);
            break;
        case 7:
            printf("%d - Dimanche",j);
            break;
        default:
            printf("Cela correspond a aucun jour");
    }
}

void codePIN() {
    char code1 = '2';
    char code2 = '0';
    char code3 = '8';
    char code4 ='4';
    char c1,c2,c3,c4;

    int n = 3;

    printf("Entrez un code PIN a 4 chiffres : ");
    scanf("%c %c %c %c",&c1,&c2,&c3,&c4);

    while (code1 !=c1 || code2 !=c2 || code3 !=c3 || code4 != c4) {
        printf("Erreur, il vous reste %d tentatives \n \tCode Pin : ",n);
        scanf("%c %c %c %c",&c1,&c2,&c3,&c4);
        fflush(stdin);
    }
    printf("\nBravo, telephone deverouille");
}

int main () {
    //majorite();
    //compteARebour();
    //comparaisonDeNombres();
    //joursDeLaSemaine();
    codePIN();

    return 0;
}