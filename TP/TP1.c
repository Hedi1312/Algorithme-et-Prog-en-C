//
// Created by Hedi OKBA on 16/09/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void convertisseurDevise() {
    float n;
    float tauxDeChange = 1.20;

    printf("Entrez un montant en euro : ");
    scanf("%f",&n);

    printf("\nLe taux de change Euro -> Dollars est de : %.2f E\n",tauxDeChange);
    printf("Vous avez donc : %.2f E", n*tauxDeChange);
}

void inversionVariable() {
    int var1 = 15;
    int var2 = 64;
    int temp;

    printf("Var 1 = %d, Var2 = %d\n", var1, var2);

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("Var 1 = %d, Var2 = %d", var1, var2);
}

void sommeEtMoyenne() {
    int a,b,c;
    double somme = 0;
    double moyenne = 0;

    printf("Entrez des valeurs pour a b et c : ");
    scanf("%d %d %d",&a, &b, &c);

    somme = a + b + c;
    moyenne = somme/3;

    printf("Somme = %.2f\t",somme);
    printf("Moyenne = %.2f",moyenne);
}


void geometrie2D() {
    int h,l;
    printf("Entrez une hauteur h et une largeur l : ");
    scanf("%d %d",&h,&l);

    printf("Perimetre = %d",(l+h)*2);
    printf("\tSurface = %d",l*h);
}

void geometrie3D() {
    int r,h;
    printf("Quel est le rayon du cercle ? ");
    scanf("%d",&r);
    printf("\tDiametre = %d",r*2);
    printf("\n\tCirconference = %.4f",2*3.14159*r);
    printf("\n\tAire = %.4f",3.14159*r*r);

    printf("\n\nQuel est la hauteur du cylindre ? ");
    scanf("%d",&h);
    printf("\tVolume = %.4f",(3.14159*r*r)*h);
}

void majuscule() {
    char c;

    printf("Entrez une lettre en miniscule : ");
    scanf("%c",&c);

    if(c>=97 && c<=122) {       //Permet de vérifier si C est une lettre miniscule
        printf("Cela donne en majuscule : %c",c-32);
    }
    else {
        printf("%c n'est pas une lettre miniscule !",c);
    }
}


void main() {
    //convertisseurDevise();
    //inversionVariable();
    //sommeEtMoyenne();
    //geometrie2D();
    //geometrie3D();
    majuscule();
}