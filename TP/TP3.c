//
// Created by Hedi OKBA on 20/09/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>


void affichageTableau() {
    int tab [5] = {2,3,4,5,6};

    printf("Tableau : ");
    for (int i = 0; i < 5; ++i) {
        printf("%d",tab[i]);
    }

    printf("\nInverse : ");
    for (int j = 4; j >=0; j--) {
        printf("%d",tab[j]);
    }
}

void statistiques() {
    int tab [5];
    int min,max;
    float moy;

    min = INT_MAX;
    max = INT_MIN;

    printf("Remplir le tableau suivant : \n");
    for (int i = 0; i < 5; ++i) {
        printf("tab [%d] : ",i);
        scanf("%d",&tab[i]);
        moy = moy + tab[i];

        if (tab[i]<min) {
            min = tab[i];
        }
        if (tab[i]>max) {
            max = tab[i];
        }
    }

    printf("Min : %d \tmax : %d \tmoyenne : %.1f",min,max,moy/5);
}

void lettrePerdue() {
    char tab[100];
    int occurence =0;
    char l;
    const int VALEUR_MIN = 'A', VALEUR_MAX = 'Z'; srand(time(NULL));

    printf("Saisissez lettre en majuscule : ");
    scanf("%c",&l);

    for(int i = 0;i < 100;i++) {
        // generation aleatoire d’une lettre majuscule
        char lettre = (char)((rand() % (VALEUR_MAX-VALEUR_MIN+1)) + VALEUR_MIN);
        tab [i] = lettre;
        if (l == lettre) {
            occurence++;
        }
    }
    printf("Nombres occurences : %d",occurence);
}


void matriceUnitaire() {
    int matrice [4][4];

    printf("Matrice unitaire de taille 4 :\n");
    for (int i = 0; i <4 ; ++i) {
        printf("\t");
        for (int j = 0; j < 4 ; ++j) {
            matrice[i][j]=0;
            matrice[0][0]=1;
            matrice[1][1]=1;
            matrice[2][2]=1;
            matrice[3][3]=1;

            printf("%d",matrice[i][j]);
        }
        printf("\n");
    }
}


void additionMatricielle() {
    int m1 [3][2] = {{1,3},{1,0},{1,2}};
    int m2 [3][2]= {{0,0},{7,5},{2,1}};;
    int res [3][2];

    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j < 2 ; ++j) {
            res[i][j] = m1[i][j] + m2[i][j];
            //printf("%d",m1[i][j]);
            printf("\t%d",res[i][j]);
        }
        printf("\n");
    }

}

int main() {
    //affichageTableau();
    //statistiques();
    //lettrePerdue();
    //matriceUnitaire();
    additionMatricielle();

    return 0;
}

