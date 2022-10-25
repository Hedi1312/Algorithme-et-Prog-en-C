//
// Created by Hedi OKBA on 25/10/2022.
//


#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>


void ordreDecroissant(int Tab[],int n) {
    int Ttrie[n];
    int i, j, tmp;

    for (int i=1 ; i <= n-1; i++) {
        j = i;

        while (j > 0 && Tab[j-1] < Tab[j]) {
            tmp = Tab[j];
            Tab[j] = Tab[j-1];
            Tab[j-1] = tmp;

            j--;
        }
    }
    printf("Tableau en ordre decroissant :\n");
    for (int i = 0; i < n ; ++i) {
        printf("Tab[%d] -> %d\n",i,Tab[i]);
    }


}

int main() {
    char saisie[10];        //Permettra de verifier si la chaine saisie est un entier

    printf("Saisir une taille : ");
    gets(saisie);

    for (int i = 0; i < strlen(saisie); ++i) {
        if((int)saisie[i]<48 || (int)saisie[i]>57) {        //Permet de verifier caractere par caractere avec le code ASCII, si la valeur est entre 0 et 9
            printf("La valeur saisie n'est pas un entier !");
            exit(1);
        }
    }

    int n = atoi(saisie);       // Convertir la chaine de caractere en int

    int tab[n];

    printf("Veuillez remplir le tableau de taille %d :\n",n);
    for (int i = 0; i < n; i++) {
        printf("tab [%d] : ", i);
        scanf("%d", &tab[i]);
    }

    ordreDecroissant(tab,n);

    return 0;
}