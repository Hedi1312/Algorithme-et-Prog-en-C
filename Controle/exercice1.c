//
// Created by Hedi OKBA on 25/10/2022.
//



#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


void myList(char myString[], int mylist[]){
    int taille = strlen(myString);
    int n;

    srand( time( NULL ) );      //Permet d'obtenir un nombre aléatoire à chaque exécution du programme

    for (int i = 0; i < taille; i++) {
        n = rand()%10;      //Permet de choisir un nombre aléatoire entre 0 et 9
        mylist[i]=n;
    }
}


void crypter(char myString[], int myList[]) {

    for (int i = 0; i < strlen(myString); ++i) {

        if(myString[i]>=97 && myString[i]<=122) {       //97 = 'a'      122 = 'z'
            if (myString[i] + myList[i] > 122) {
                myString[i] = myString[i] + myList[i] - 26;         // -26 pour revenir au 'a'
            } else {
                myString[i] = myString[i] + myList[i];
            }
        }

        else if(myString[i]>=65 && myString[i]<=90) {       //65 = 'A'      90 = 'Z'
            if(myString[i] + myList[i] > 90) {
                myString[i]=myString[i]+myList[i]-26;       // -26 pour revenir à partir au 'A'
            }
            else{
                myString[i]=myString[i]+myList[i];
            }
        }

        else if(myString[i]>=48 && myString[i]<=57) {       //0 = 48      9 = '57'
            if (myString[i] + myList[i] > 57) {
                myString[i] = myString[i] + myList[i] - 10;     // -10 pour revenir à partir au du 0
            } else {
                myString[i] = myString[i] + myList[i];
            }
        }
        else {
            myString[i] = myString[i] + myList[i];          // Le cas ou ce n'est pas une lettre
        }

    }

}



int main() {
    char myString[100];
    printf("Saisir chaine caracteres : ");
    gets(myString);

    int mylist[strlen(myString)];

    myList(myString,mylist);

    crypter(myString,mylist);

    for (int i = 0; i < strlen(myString); ++i) {
        printf("%d",mylist[i]);
    }

    printf("\n%s",myString);


    return 0;
}