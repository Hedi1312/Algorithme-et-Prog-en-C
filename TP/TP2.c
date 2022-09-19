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

}

int main () {
    //majorite();
    compteARebour();
}