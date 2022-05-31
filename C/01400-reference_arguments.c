#include <stdio.h>

// ce programme montre l'intérêt de l'utilisation d'un pointeur dans un programme
// commençons par déclarer 2 fonctions, une sans pointeur, une avec pointeur.
void rajoute_un(int n);
void rajoute_un_pointeur(int *m);

// définition de la fonction principale
int main(void) {
    // dans le cas de la fonction sans pointeur
    printf("en utilisant une fonction qui n'utilise pas de pointeur \n");
    int n; n = 0;
    printf("Avant : %d\n", n);
    // en appelant la fonction, on souhaite augmenter n de 1
    rajoute_un(n);
    printf("Après : %d\n", n);
    // dans ce cas, ça ne va servir à rien, la valeur de n ne changera pas !

    // dans le cas de la fonction avec pointeur
    int m; m = 0;
    printf("en utilisant une fonction qui utilise un pointeur \n");
    printf("Avant : %d\n", m);
    // en appelant la fonction, on souhaite augmenter m de 1
    rajoute_un_pointeur(&m);
    printf("Après : %d\n", m);
    // dans ce cas, la valeur de m va augmenter de 1 !
}

void rajoute_un(int n) {
    n++;
}

void rajoute_un_pointeur(int *m) {
    (*m)++;
}

/*
ce programme montre comment une variable locale utilisée dans une fonction, peut être modifié par une
fonction extérieure à la fonction utilisant la variable...
dans le premier cas, on définit une variable n dans la fonction main(), la fonction rajoute_un ne peut pas
accéder à la variable n de la fonction main().
dans le second cas, on définit une variable m dans la fonction main(), la fonction rajoute_un_pointeur
arrive à la modifié car le pointeur de la fonction à pour référence la variable m (symbole &).

une fois compilé et exécuté, le programme est sensé retourner ceci:

en utilisant une fonction qui n'utilise pas de pointeur 
Avant : 0
Après : 0
en utilisant une fonction qui utilise un pointeur 
Avant : 0
Après : 1

*/
