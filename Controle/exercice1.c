//
// Created by Hedi OKBA on 25/10/2022.
//



#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>


void myList(char *myString, int mylist[]){
    int taille = strlen(myString);
    int n;

    srand( time( NULL ) );      //Permet d'obtenir un nombre aléatoire à chaque exécution du programme

    for (int i = 0; i < taille; i++) {
        n = rand()%9+1;
        mylist[i]=n;
    }

}


int main() {
    char myString[100];
    printf("Saisir chaine caracteres : ");
    gets(myString);

    int mylist[strlen(myString)];

    myList(myString,mylist);

    for (int i = 0; i < strlen(myString); ++i) {
        printf("%d",mylist[i]);
    }

    return 0;
}