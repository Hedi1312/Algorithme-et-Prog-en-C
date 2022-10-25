//
// Created by Hedi OKBA on 25/10/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>


void exercice3(int n, int tab[n][n]){
    int nbrAleatoireImpair;

    srand(time(NULL));      //Permet d'obtenir un nombre aléatoire à chaque exécution du programme

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {           //Permet de parcourir la matrice
            if(tab[i][j]%2==0) {                // Si le nombre est pair on le remplace par un nombre impair
                do {
                    nbrAleatoireImpair = rand();
                } while (nbrAleatoireImpair%2==0);      //Tant que le nombre genere aleatoirement est un nombre pair, on le regenere

                tab[i][j]=nbrAleatoireImpair;           //On remplace la valeur de la matrice par le nombre impair genere aleatoirement
            }
        }
    }
}


int main(){
    char saisie[10];         //Permettra de verifier si la chaine saisie est un entier

    printf("Saisir une taille de matrice : ");
    gets(saisie);

    for (int i = 0; i < strlen(saisie); ++i) {
        if((int)saisie[i]<48 || (int)saisie[i]>57) {        //Permet de verifier caractere par caractere avec le code ASCII, si la valeur est entre 0 et 9
            printf("La valeur saisie n'est pas un entier !");
            exit(1);
        }
    }
    int n = atoi(saisie);       // Convertir la chaine de caractere en int

    int tab[n][n];

    printf("Remplir la matrice de taille %d :\n",n);
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Tab[%d][%d]\n",i,j);
            scanf("%d",&tab[i][j]);
        }
    }


    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            printf("\t%d",tab[i][j]);
        }
        printf("\n");
    }

    exercice3(n,tab);

    printf("\n");

    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j <n ; ++j) {
            printf("\t%d",tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}