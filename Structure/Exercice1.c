//
// Created by hedio on 18/10/2022.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int compte_c(FILE *f) {
    int nbrCaractere=-1;
    char c;

    if (f!=NULL){
        do {
            c= fgetc(f);
            nbrCaractere++;
        } while (c!=EOF);

        fclose(f);
        return nbrCaractere;
    }
    else{
        exit(-1);
    }
}


int compte_m(FILE *f) {
    int nbrMot=1;
    char c;

    if (f!=NULL){
        do {
            c= (char)fgetc(f);
            if(c==' ' || c=='\n'){
                nbrMot++;
            }
        } while (c!=EOF);

        fclose(f);
        return nbrMot;
    }
    else{
        exit(-1);
    }
}


int compte_l(FILE *f){
    int nbrLigne=1;
    char c;

    if (f!=NULL){
        do {
            c = (char)fgetc(f);
            if(c=='\n'){
                nbrLigne++;
            }
        } while (c!=EOF);

        fclose(f);
        return nbrLigne;
    }
    else{
        exit(-1);
    }
}

int main() {
    FILE *f = fopen("exercice1.txt","r");
//    printf("Le nombre de caractere dans le fichier est %d", compte_c(f));
//    printf("Le nombre de mot est %d", compte_m(f));
//    printf("Le nombre de ligne est %d", compte_l(f));

    return 0;
}