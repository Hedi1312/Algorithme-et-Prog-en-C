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

void strings() {
    char chaine[] = {'S','a','l','u','t',' ','l','e','s',' ','c','o','d','e','u','r','s','!','\0'};
    char chaine2[10];

    printf("%s",chaine);
    strncpy(chaine2,chaine,5);
    chaine2[5]='\0';
    printf("\n%s",chaine2);
}


void carteIdentite() {
    char date[10];
    char nom[25];
    char prenom[25];
    char couleur[15];

    printf("\tDate de naissance (jj/mm/aaaa) : ");
    scanf("%10s",date);

    fflush(stdin);

    printf("\tNom : ");
    scanf("%s",nom);

    printf("\tPrenom : ");
    scanf("%s",prenom);

    printf("\tCouleur des yeux : ");
    scanf("%s",couleur);

    printf("\nVous vous appelez %s %s, vous etes nee le %s et vos yeux sont %s",prenom,nom,date,couleur);
}


void majuscules() {
    char string[100];
    printf("Ecrire un message : ");
    gets(string);

    for (int i = 0; i < strlen(string); ++i) {
        if(string[i]>=97 && string[i]<=122) {
            string[i] = string[i]-32;
        }
    }
    printf("Donne en majuscule : %s",string);
}


void miroire() {
    char string[100];
    char stringInverse[100];
    printf("Ecrire un message : ");
    gets(string);

    for (int i = strlen(string)-1; i >=0 ; i--) {
        stringInverse[strlen(string)-i-1]= string[i];
    }
    printf("\nEffet miroire : \n%s | %s",string,stringInverse);
}

void motDePasse() {
    char mdp[8];
    int maj,car,chiffre;
    char confirmation[8];
    do {
        int i =0;
        printf("Entrer un mot de passe (1 majuscule, 1 caractere speciale, un chiffre, 5-8 carcateres) : ");
        scanf("%s", mdp);
        fflush(stdin);

        if (strlen(mdp)>=5 && strlen(mdp)<=8){
            while  (mdp[i]!='\0') {
                printf("lettre -> %c\n",mdp[i]);
                if(mdp[i]>=65 && mdp[i]<=90) {
                    maj=1;
                }
                if (mdp[i]>=33 && mdp[i]<=47 || mdp[i]>=58 && mdp[i]<=64) {
                    car=1;
                }
                if (mdp[i]>=48 && mdp[i]<=57) {
                    chiffre=1;
                }
                i++;
            }

            if(maj==1 && car==1 && chiffre==1){
                printf("\nConfirmer le mot de passe : ");
                scanf("%8s",confirmation);
                fflush(stdin);
            }
        }
        else {
            printf("\nMot de passe saisit incorrecte !\n");
        }

    }while((strcmp(mdp,confirmation)!=0 || confirmation==NULL));
    printf("\nMot de passe correct !");
}


void strlenPerso() {
    char chaine[100];
    int i =0;
    printf("Entrer une chaine de caracteres : ");
    scanf("%s", chaine);

    while(chaine[i]!='\0') {
        i++;
    }
    printf("Taille du message : %d",i);
}


void strcmpPerso(){
    char chaine[100];
    int i = 0;
    char codeur[] = "CODEUR";

    printf("Entrer une chaine de caracteres en MAJUSCULE : ");
    scanf("%s", chaine);

    while (chaine[i]!='\0'){
        if(chaine[i]!=codeur[i]){
            if(chaine[i]>codeur[i]) {
                printf("\nLes chaines %s et %s ne sont pas identiques et %s > %s", chaine, codeur,chaine,codeur);
            }
            else{
                printf("\nLes chaines %s et %s ne sont pas identiques et %s < %s", chaine, codeur,chaine,codeur);
            }
            exit(1);
        }
        i++;
    }
    printf("\nLes chaines %s et %s sont identiques",chaine,codeur);
}

int main() {
    //affichageTableau();
    //statistiques();
    //lettrePerdue();
    //matriceUnitaire();
    //additionMatricielle();
    //strings();
    //carteIdentite();
    //majuscules();
    //miroire();
    //motDePasse();
    //strlenPerso();
    strcmpPerso();

    return 0;
}

