//
// Created by Hedi OKBA on 19/09/2022.
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

    while ((code1 !=c1 || code2 !=c2 || code3 !=c3 || code4 != c4) && n>0) {
        printf("Erreur, il vous reste %d tentatives \n \tCode Pin : ",n);
        scanf("%c %c %c %c",&c1,&c2,&c3,&c4);
        fflush(stdin);
        n--;
    }
    if (n <=0) {
        printf("\nTrop de tentatives, telephone bloque");
    }
    else {
        printf("\nBravo, telephone deverouille");
    }
}

void pairImpair() {
    int n;

    printf("Entrez un nombre entier : ");
    scanf("%d",&n);

    if(n%2==0) {
        printf("Le nombre %d est pair",n);
    }
    else {
        printf("Le nombre %d est impair",n);
    }
}

void nombrePremier() {
    int n;

    printf("Entrez un nombre : ");
    scanf("%d",&n);

    for (int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            printf("Le nombre %d n'est pas un nombre premier",n);
            exit(0);
        }
    }
    printf("Le nombre %d est un nombre premier",n);
}

void conversionDate() {
    int j,m,a;

    printf("Entrez une date : ");
    scanf("%d %d %d",&j,&m,&a);

    switch (m) {
        case 1:
            printf("%d Janvier %d",j,a);
            break;
        case 2:
            printf("%d Fevrier %d",j,a);
            break;
        case 3:
            printf("%d Mars %d",j,a);
            break;
        case 4:
            printf("%d Avril %d",j,a);
            break;
        case 5:
            printf("%d Mai %d",j,a);
            break;
        case 6:
            printf("%d Juin %d",j,a);
            break;
        case 7:
            printf("%d Juillet %d",j,a);
            break;
        case 8:
            printf("%d Aout %d",j,a);
            break;
        case 9:
            printf("%d Septembre %d",j,a);
            break;
        case 10:
            printf("%d Octobre %d",j,a);
            break;
        case 11:
            printf("%d Novembre %d",j,a);
            break;
        case 12:
            printf("%d Decembre %d",j,a);
            break;
        default:
            printf("%d Mois incorrect %d",j,a);
    }
}

void tableMultiplication() {
    int n;

    printf("Entrez un entier : ");
    scanf("%d",&n);

    for (int i = 0; i <= n ; i++) {
        printf("\t%d x %d = %d\n",n,i,n*i);
    }
}

void triangleDesEtoiles() {
    int n;

    printf("Donnez un nombre de ligne [3 - 10] : ");
    scanf("%d",&n);

    for (int i = 0; i <=n ; i=i+2) {
        printf("\n");
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
    }
}

int main () {
    //majorite();
    //compteARebour();
    //comparaisonDeNombres();
    //joursDeLaSemaine();
    //codePIN();
    //pairImpair();
    //nombrePremier();
    //conversionDate();
    //tableMultiplication();
    triangleDesEtoiles();

    return 0;
}