#include <stdlib.h>
#include <stdio.h>
#include "tp.h"

//Premiers programmes:
//Un programme qui demande a l’utilisateur son prenom, puis son nom, et affiche 'Bonjour prenom nom'.
int quisuisje(){
    char p[10],n[10];
    printf("Ton prenom? ");
    scanf("%s", p);
    printf("Ton nom? ");
    scanf("%s", n);
    printf("Dak %s %s, ty est un vrai BG toi.\n", p,n);
    return 0;
}

//Un programme qui permute deux valeurs entieres et les affiche avant et apres permutation.
int permute(){
    int a, b, c;
    printf("Un nombre ? ");
    scanf("%d", &a);
    printf("Un autre nombre ? ");
    scanf("%d", &b);
    printf("Dak, tes deux nombres sont : %d et %d.\n", a,b);
    c = a;
    a = b;
    b = c;
    printf("Tiens tes nombres apres permutation:  %d et %d.\n", a,b);
    return 0;
}

//Structures de controle:
//Un programme qui indique si une annee donnee par l’utilisateur est bissextile.
int year(){
    int y;
    printf("Une annee? ");
    scanf("%d", &y);
    if ((y%4 == 0 && y%100 != 0)||(y%400 == 0)){
        printf("Bissextile! ;p \n");      
    }
    else{
        printf("PAS Bissextile! ;p \n");
    }
    return 0;
}

// Afficher division, remarquer que faire un int sur un float prend seulement la valeur entière.
int division() {
    int a, b;
    printf("Valeur a : ");
    scanf("%d", &a);
    printf("\nValeur de b : ");
    scanf("%d", &b);
    printf("\n%d", (a/b));

    return 0;
}

//Un programme qui demande deux entiers a et b a l’utilisateur et calcule leur produit sans utiliser l’operateur ’*’.
int multi_aux(int a, int b) {
    if (a==0) {
        return 0;
    }
    else {
        return b + multi_aux(a-1, b);
    }
}

int multi() {
    int a, b;
    printf("Valeur a (positif) : ");
    scanf("%d", &a);
    printf("\nValeur de b (positif) : ");
    scanf("%d", &b);
    printf("Le résultat est %d !", multi_aux(a, b));
    
    return 0;
}

//Un programme qui demande a l’utilisateur un entier h, et affiche une pyramide.
int pyramide() {
    int h;
    printf("Valeur h (positif) : ");
    scanf("%d", &h);
    for(int i = 0; i<=h; i++) {
        int esp = h-i;
        for(int e = 0; e < esp; e++) {
            printf(" ");
        }
        for(int j = 0; j!=i; j++) {
            printf("%d", j);
        }
        for(int k = i-2; k>=0; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}

//Un algorithme avec une boucle while qui realise le calcul de n! (factorielle).
int factoriel() {
    int n, res = 1;
    printf("Valeur n! (positif) : ");
    scanf("%d", &n);
    while(n >= 1) {
        res *= n;
        n--;
    }
    printf("Le resultat est %d ! \n", res);
    return 0;
}

//un programme permettant de saisir une suite d’entiers et de faire leur somme. La saisie des entiers est interrompue lorsque l’utilisateur donne la valeur 0.
int sum(){
    int a, t = 0;
    do {
        printf("\nEntier: ");
        scanf("%d", &a);
        t += a;
    }while (a != 0);
    printf("\n La somme donne: %d \n", t);
    return 0;
}