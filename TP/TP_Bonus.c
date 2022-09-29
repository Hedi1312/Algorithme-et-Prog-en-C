//
// Created by Hedi OKBA on 27/09/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void exercice1();
int exercice2(int n);
void exercice2_2();
int exercice3(int n);
void exercice3_2();
void exercice4();
char* exercice5();
void exercice6();
void exercice7();
void exercice8();


int main () {
//    exercice1();
//
//    printf("%d",exercice2(9));
//    exercice2_2();
//
//    printf("%d",exercice3(28));
//    exercice3_2();
//
//    exercice4();
    printf("%s",exercice5());
    //exercice6();
    //exercice7();
    //exercice8();


    return 0;
}

void exercice1() {
    /* dans l’intervalle des nombre entiers de 100 à 500,
    il existe uniquement quatre nombres dont la somme des cubes
    des chiffres le composant est égale au nombre lui-même. */

    int a = 0; //Le total des nombres (qui doit être de 4)
    int nbTentative = 100; //On nous demande de chercher les nombres entre 100 et 500

    while (a!=4 && nbTentative<=500) { // Si a < 4 cela signifie que l'on a pas trouver tous les nombres entre 1 et 500
        if((pow(nbTentative%10,3) + pow(nbTentative%100/10,3) + pow(nbTentative/100,3))==nbTentative) {     //nbTentative%10 == chiffre unité
            printf("%d\n",nbTentative);                                                                                 // nbTentative%100/10 == chiffre dizaine
            a++;    /* on incremente le a car un des 4 a été trouvé*/                                                          // nbTentative/100 == chiffre centaine
        }
        nbTentative++;
    }
}


int exercice2(int n){
    /*Sachant qu'un nombre premier est un nombre dont les
    seuls diviseurs sont 1 et le nombre
    lui-même.*/

    for (int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return n;
}


void exercice2_2(){
    /*Ecrire un programme qui demande à l’utilisateur de saisir deux
    entier A et B puis retourner tout les nombre premier dans
    l’intervalle [A, B] */

    int a,b;

    printf("Entrez deux nombres [A, B] : ");
    scanf("%d %d",&a,&b);
    printf("Tous les nombres premiers entre %d et %d sont : ",a,b);

    for (int i = a; i <= b; i++) {
        if(exercice2(i)!=0) {
            printf("%d ", exercice2(i));
        }
    }
}


int exercice3(int n) {
    /*: On appelle un nombre dont la somme de tous ses
    diviseurs, excepté lui-même, est égale au
    nombre lui-même par un nombre Parfait.*/

    int somme=0;

    for (int i = 1; i <= n/2; i++) {
        if(n%i==0){
            somme = somme+i;
        }
    }

    if(somme == n) {
        return 1;
    }

    return 0;
}


void exercice3_2() {
    /*Demander à l’utilisateur de saisir un entier N et retrouver tous les
    nombre parfait compris entre 1 et N */

    int n;

    printf("Entrez un nombre : ");
    scanf("%d",&n);

    printf("Tous les nombres parfaits entre 1 et %d sont : ",n);

    for (int i = 1; i <= n; i++) {
        if(exercice3(i)==1) {
            printf("%d ",i);
        }
    }
}


void exercice4() {
    /*  Soit N1 et N2 deux nombre que l'on souhaite obtenir à
        partir d'un autre nombre N de la façon suivante:
        N1: sera constitué par les chiffres pairs de N
        N2: sera constitué par les chiffres impairs
        Ecrire un programme en C qui permet d’obtenir N1 et N2 à partir
        d’un nombre que l’utilisateur saisi au clavier. */

    int N,N1=0,N2=0,i;

    printf("Entrez un nombre : ");
    scanf("%d",&N);
    printf("N : %d\t",N);

    do {
        int b = log10(N);
        i = N/(pow(10,b));

        if (i%2==0) {
            N1 =N1*10+i;
        }
        else {
            N2 = N2*10+i;
        }

        N = (N-i*(pow(10,b)));

    } while (N!=0);

    printf("\tN1 : %d\t",N1);
    printf("\tN2 : %d",N2);
}


char* exercice5() {
    /* : écrire un programme en C qui permet de retourner VRAI si
        un tableau est un palindrome et FALSE sinon. */

    int res,longueurTab;

    printf("Entrez une taille pour le tableau : ");
    scanf("%d",&longueurTab);

    printf("Remplir le tableau : ");
    char tab [longueurTab];
    scanf("%s",tab);

    res = 1;

    for (int j = 0; j < longueurTab; ++j) {
//        printf("j -> %c -> j = %d \longueurTab",tab[j],j);
//        printf("j+longueurTab -> %c -> j = %d\longueurTab\longueurTab",tab[longueurTab-j],j);
        if(tab[j] != tab[longueurTab - 1 - j]) {
            res = 0;
        }
    }

    if(res == 1 && longueurTab > 0){
        return "VRAI";
    }
    return "FALSE";
}


void exercice6() {

}





