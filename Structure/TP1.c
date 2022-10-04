//
// Created by Hedi OKBA on 04/10/2022.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int indice=0;


typedef struct personne {
    char nom[50];
    int age;
} Personne;


Personne nouvellePersonne( char nom[50], int age) {
    Personne personne;

    strcpy(personne.nom,nom);
    personne.age=age;

    return personne;
}


void ajouterPersonneTab(Personne p,Personne *tab){
    strcpy(tab[indice].nom,p.nom);
    (tab+indice)->age=p.age;
    indice++;
}

void parcourTab(Personne *tab){
    for (int i = 0; i < indice; ++i) {
        printf("Nom -> %s\t",(tab+i)->nom);
        printf("Age -> %d\n",(tab+i)->age);
    }
}

void exercice3(Personne tab[],int taille) {
    for (int i = 0; i < taille ; ++i) {
        if(tab[i].age<20){
            for (int j = i; j < taille; j++) {
//                tab[j] = tab[j + 1];
                if( j < taille-1){
                    tab[j] = tab[j+1];
                }
                else
                {
                    tab[j] = tab[j];
                }
            }
        }
    }
}


int main() {

    Personne tab[20];

    Personne p1 =nouvellePersonne("Hedi",19);
    Personne p2 =nouvellePersonne("Amir",20);
    Personne p3 =nouvellePersonne("Hassane",22);


    ajouterPersonneTab(p1,tab);
    ajouterPersonneTab(p2,tab);
    ajouterPersonneTab(p3,tab);

    //parcourTab(tab);

    exercice3(tab,20);

    parcourTab(tab);


    return 0;
}