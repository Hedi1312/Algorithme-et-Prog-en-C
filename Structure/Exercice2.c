//
// Created by hedio on 18/10/2022.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main() {
    char p[50],n[50],adr[100];
    int age;

    printf("Saisir un prenom : ");
    gets(p);

    printf("Saisir un nom : ");
    gets(n);

    printf("Saisir un age : ");
    scanf("%d",&age);

    fflush(stdin);
    printf("Saisir une adresse : ");
    gets(adr);

    FILE *myFile=NULL;
    myFile= fopen("exercice2.txt","w");

    if(myFile!=NULL) {
        fprintf(myFile,"Prenom : %s\nNom : %s\nAge : %d\nAdresse : %s",p,n,age,adr);
        fclose(myFile);
    }
    else {
        printf("Error ! \n");
        exit(-1);
    }
    return 0;
}
