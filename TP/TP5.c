//
// Created by hedio on 27/09/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>




int min(int a, int b) {
    return (a<b) ? a:b;
}

int max(int a, int b) {
    return (a>b) ? a:b;
}


int puissance(int a, int b) {
    return (int)pow(a,b);
}


char* isANumber(int a) {
    if(a==0){
        return "Ce n'est pas un nombre\n";
    }
    return "C'est un nombre\n";
}


int valPresente(int tab[],int taille,int n) {
    for(int i=0;i<taille;i++) {
        if(tab[i]==n){
            return i;
        }
    }
    return -1;
}


int occurences(char*s, char c) {
    int compteur=0;

    for (int i = 0; i < strlen(s); ++i) {
        if(*(s+i)==c){
            compteur++;
        }
    }
    return compteur;
}


double fonctionF(int x){
    return sin(x)+ log(x)- sqrt(x);
}


void xDeF() {
    printf("\tX\tF(X)\n");
    for (int i = 1; i <= 10; ++i) {
        printf("\t%d\t%f\n",i,fonctionF(i));
    }
}

int main() {
//    printf("Le minimum de 12 et 9 est : %d\n",min(12,9));
//    printf("Le maximum de 12 et 9 est : %d",max(12,9));

//    printf("2 puissance 3 = %d", puissance(2,3));

//    int a;
//    printf("Saisir un entier : ");
//    scanf("%d",&a);
//    printf("%s", isANumber(a));

//    int tab[]={10,20,30,40,50,60,70};
//    int n = 50;
//    printf("La valeur %d est a la position %d du tableau", n,valPresente(tab,7,n));

//    char c='i';
//    printf("Le caractere '%c' est present %d fois",c, occurences("Oh le joli fichier",c));

    xDeF();

    return 0;
}