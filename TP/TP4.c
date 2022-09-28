//
// Created by Hedi OKBA on 27/09/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>


void adresseVariables() {
    char c='H';

    printf("Informations sur ma variable : \n");
    printf("\tType : char\n");
    printf("\tTaille : %d octet\n",sizeof(c));
    printf("\tContenu : %c\n",c);
    printf("\tAdresse : %x\n",&c);
}


void pointeurs() {
    int *n = (int *)malloc(sizeof(int));

    printf("Donnez un entier : ");
    scanf("%d", n);

    printf("La valeur %d est stockee a l'adresse %x ",*n,n);
    free(n);
}


void inversionVariable() {
    char prenom = 'A', nom = 'Z';

    char *p_prenom = &prenom;
    char *p_nom = &nom;

    printf("Vos initiales sont %c %c\n",prenom,nom);
    //inversion

//    *p_prenom = *p_nom;
    char *p_temp = &nom;

    printf("*Prenom -> %c -> %x -> prenom -> %c\n",*p_prenom,p_prenom,prenom);
    printf("*Nom -> %c -> %x -> nom -> %c\n\n",*p_nom,p_nom,nom);

    p_nom = p_prenom;
    p_prenom = p_temp;

    //prenom = *p_temp;
    //nom = *p_nom;

    printf("*Prenom -> %c -> %x -> prenom -> %c\n",*p_prenom,p_prenom,prenom);
    printf("*Nom -> %c -> %x -> nom -> %c\n\n",*p_nom,p_nom,nom);

    printf("*Temp %c -> %x\n",*p_temp,p_temp);

//    printf("Vos initiales sont %c %c\n",prenom,nom);

}

int main() {
    //adresseVariables();
    //pointeurs();
    inversionVariable();
    //sosCrash();
    //longueurChaine();
    //calculTableau();

    return 0;
}
