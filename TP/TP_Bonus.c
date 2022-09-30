//
// Created by Hedi OKBA on 27/09/2022.
//

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

void exercice1();
int exercice2(int n);
void exercice2_2();
int exercice3(int n);
void exercice3_2();
void exercice4();
char* exercice5();
char* exercice6();
int exercice7(int n);
void exercice8();


int main () {
    exercice1();
//
//    printf("%d",exercice2(4));
//    exercice2_2();
//
//    printf("%d",exercice3(28));
//    exercice3_2();
//
//    exercice4();
//
//    printf("%s",exercice5());
//
//    printf("%s",exercice6());
//
//    printf("%d",exercice7(3));

    exercice8();

    return 0;
}

void exercice1() {
    /* Dans l’intervalle des nombre entiers de 100 à 500,
    il existe uniquement quatre nombres dont la somme des cubes
    des chiffres le composant est égale au nombre lui-même. */

    int a = 0; //Le total des nombres (qui doit être de 4)
    int i = 100; //On nous demande de chercher les nombres entre 100 et 500

    while (a!=4 && i<=500) { // Si a < 4 cela signifie que l'on a pas trouver tous les nombres entre 100 et 500

        if((pow(i%10,3) + pow(i%100/10,3) + pow(i/100,3))==i) {
            //nbTentative%10 == chiffre unité   nbTentative%100/10 == chiffre dizaine  nbTentative/100 == chiffre centaine
            // Permet de savoir si la somme des cubes de chaque chiffre est egale au chiffre -> pow(10,2) = 10^2

            printf("%d\n",i);
            a++;    /* On incremente le a car un des 4 nombres a été trouvé*/
        }
        i++; // On passe au nombre suivant
    }
}


int exercice2(int n){
    /*Sachant qu'un nombre premier est un nombre dont les
    seuls diviseurs sont 1 et le nombre lui-même.*/

    for (int i =2;i<=sqrt(n);i++){      //Pour chaque nombre entre 2 et racine carre de nar chaque nombre est divisble par 1, on va diviser n par chaque chiffre entre 2 et racine carree de n
        if(n%i==0){                         // Si le reste de la division de n par i est egale a 0 cela signifie que i divise n donc n n'est pas premier
            return 0;                       // Si le nombre n'est pas premier, on retourne 0
        }
    }
    return n;                           // Si aucun chiffre entre 2 et racine carree de n ne divise n, cela signifie que c'est un chiffre premier donc on retourne n
}


void exercice2_2(){
    /*Ecrire un programme qui demande à l’utilisateur de saisir deux
    entier A et B puis retourner tout les nombre premier dans
    l’intervalle [A, B] */

    int a,b;

    printf("Entrez deux nombres [A, B] : ");
    scanf("%d %d",&a,&b);                       // On recupere les 2 nombres entre par l'utilisateur

    printf("Tous les nombres premiers entre %d et %d sont : ",a,b);

    for (int i = a; i <= b; i++) {          // Pour chaque nombre entre a et b, on va verifier s'il est premier
        if(exercice2(i)!=0) {           // Permet de savoir si i est premier etant donne que la fonction exercice2(int n) retourne 0 si le nombre n'est pas premier
            printf("%d ", exercice2(i));
        }
    }
}


int exercice3(int n) {
    /* On appelle un nombre dont la somme de tous ses
    diviseurs, excepté lui-même, est égale au
    nombre lui-même par un nombre Parfait.*/

    int somme=0;

    for (int i = 1; i <= n/2; i++) {        //Pour chaque nombre entre 1 et n/2, on va diviser n par chaque chiffre entre 1 et n/2 -> permet de trouver tout ses diviseurs
        if(n%i==0){                         //Si le reste de la divison de n par i est egale a 0, cela signifie que i divise n donc i est un diviseur
            somme = somme+i;                //On fait une somme de tous les diviseurs -> i est un diviseur donc on l'ajoute dans le calcul de la somme
        }
    }

    if(somme == n) {            //Si n est egale a la somme des diviseurs alors n est un nombre parfait donc on retourne 1
        return 1;
    }
    return 0;                   //Si n n'est pas egale a la somme des diviseurs alors n n'est pas un nombre parfait donc on retourne 0
}


void exercice3_2() {
    /*Demander à l’utilisateur de saisir un entier N et retrouver tous les
    nombre parfait compris entre 1 et N */

    int n;

    printf("Entrez un nombre : ");
    scanf("%d",&n);     // On recupere le nombre entre par l'utilisateur

    printf("Tous les nombres parfaits entre 1 et %d sont : ",n);

    for (int i = 1; i <= n; i++) {      // Pour chaque nombre entre 1 et N, on va verifier s'il est parfait ou non
        if(exercice3(i)==1) {       // Permet de savoir si i est parfait etant donne que la fonction exercice3(int n) retourne 1 si le nombre est parfait
            printf("%d ",i);
        }
    }
}


void exercice4() {
    /*  Soit N1 et N2 deux nombre que l'on souhaite obtenir à
        partir d'un autre nombre N de la façon suivante:
        N1: sera constitué par les chiffres pairs de N
        N2: sera constitué par les chiffres impairs
        Ecrire un programme en C qui permet d’obtenir N1 et N2 à partir
        d’un nombre que l’utilisateur saisi au clavier. */

    int N,N1=0,N2=0,i;

    printf("Entrez un nombre : ");
    scanf("%d",&N);     // On recupere les 2 nombres entre par l'utilisateur
    printf("N : %d\t",N);

    do {
        int b = log10(N);       //Permet de recuperer la longueur -1 d'un nombre
        i = N/(pow(10,b));      // Le premier chiffre d'un nombre est egale a la partie entiere de : nombre / (10^(longueur du nombre-1))  -> dans 9456, 9 = 9456/(10^4-1)

        if (i%2==0) {           //On verifife si le chiffre est pair car si le reste de la division de i par 2 est egale a 0 -> i est pair
            N1 =N1*10+i;        // Permet en quelques sorte de concatener les chiffres pairs dans N1
        }
        else {
            N2 = N2*10+i;   // Permet en quelques sorte de concatener les chiffres impairs dans N2
        }

        N = (N-i*(pow(10,b)));  // Permet de reduire N en supprimant son premier chiffre -> N = 945, i = 9, b = 2 -> 945-9*10^2 -> 45

    } while (N!=0);     //On effectue les operations precedentes tant que N!=0 car si N==0 cela signifie qu'il y a plus de chiffre dans le nombre

    printf("\tN1 : %d\t",N1);
    printf("\tN2 : %d",N2);
}


char * exercice5() {        //Etant donne que VRAI et FALSE sont des chaines de caractere on retourne char*
    /* : écrire un programme en C qui permet de retourner VRAI si
        un tableau est un palindrome et FALSE sinon. */

    int longueurTab;

    printf("Remplir le tableau : ");
    char *tab = (char*)malloc(sizeof(char));  //Allocation de memoire pour tab
    scanf("%s",tab);            // On recupere la chaine de caractere saisie par l'utilisateur

   longueurTab = strlen(tab);       // On determine la longueur de la chaine de tab

    for (int i = 0; i < longueurTab; ++i) {     // Pour chaque nombre entre 1 et la longueur du tableau, on va verifier si la valeur dans le tableau est egale a sa 'symetrie'
        if(tab[i] != tab[longueurTab - 1 - i]) {    // Permet de verifier par 'symetrie' si les valeures sont egales ou pas
            return "FALSE";   // Le chaine de caractere n'est pas un palindrome
        }
    }
    return "VRAIE";     // Le chaine de caractere est un palindrome
}


char* exercice6() {
    /*En utilisant les pointeurs, écrire un fonction qui permet
    d’ordonner les éléments d’un tableau dans un ordre décroissant */

    int longueurTab, i, j;
    int *valeurTemp = (int*)malloc(sizeof(int));

    printf("Remplir le tableau : ");
    char *tableau = (char*)malloc(sizeof(char));
    scanf("%s", tableau);       //Permet de recuperer la chaine de caractere saisie par l'utilisateur

    longueurTab = strlen(tableau);      // Permet d'avoir la longueur de la chaine de caractere

    for (i=0; i<longueurTab; i++){      // Pour chaque nombre entre 0 et la longueur du tableau
        for(j=i; j<longueurTab; j++){
            if(tableau[j]>tableau[i]){
                //valeurTemp = tableau[i];
                *valeurTemp = *(tableau+i);

                //tableau[i] = tableau[j];
                *(tableau+i) = *(tableau+j);

                //tableau[j] = valeurTemp;
                *(tableau+j) = *valeurTemp;
            }
        }
    }
    return tableau;
}


int exercice7(int n) {
    /* Ecrire une fonction récursive qui permet de calculer le
    factoriel d’un nombre entier passé en paramètre.*/

    if (n == 1 || n == 0) {     // Etant donne que le factoriel de 0 et 1 est un cas particulier
        return 1;               // Le factoriel de 1 et de 0 est egale a 1
    }
    return n * exercice7(n - 1);        // Etant donne que n factoriel -> n! = (n) (n-1) (n-2) … (1), on rappelle la fonction avec n-1 et comme c'est un produit on ajoute n* devant
}



void exercice8() {

}