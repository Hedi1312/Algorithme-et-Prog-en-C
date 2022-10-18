//
// Created by hedio on 18/10/2022.
//

#include <stdio.h>
#include <stdlib.h>
int indice=0;



struct centre{
    int x;
    int y;
};

struct rayon{
    int x;
    int y;
};

typedef struct cercle{
    struct rayon r;
    struct centre c;
}Cercle;


Cercle nouveauCercle(int xc,int yc,int xr,int yr){
    Cercle cercle;
    cercle.c.x=xc;
    cercle.c.y=yc;

    cercle.r.x=xr;
    cercle.r.y=yr;

    return cercle;
}


void afficheCercle(Cercle c) {
    printf("X centre -> %d\tY centre -> %d\n",c.c.x,c.c.y);
    printf("X rayon -> %d\tY rayon -> %d\n\n",c.r.x,c.r.y);
}


void ajouterCercleTab(Cercle c,Cercle *tab){
    (tab+indice)->c.x=c.c.x;
    (tab+indice)->c.y=c.c.y;
    (tab+indice)->r.x=c.r.x;
    (tab+indice)->r.y=c.r.y;

    indice++;
}

void afficherTab(Cercle *tab){
    for (int i = 0; i < indice; ++i) {
        afficheCercle(*(tab+i));
    }
}


void exercice4(Cercle *tab,int x,int y) {

}


int main() {
    Cercle tab[50];

    Cercle c1= nouveauCercle(0,0,6,7);
    Cercle c2= nouveauCercle(0,0,2,4);
    Cercle c3= nouveauCercle(0,0,1,5);

    ajouterCercleTab(c1,tab);
    ajouterCercleTab(c2,tab);
    ajouterCercleTab(c3,tab);

    afficherTab(tab);

    return 0;
}