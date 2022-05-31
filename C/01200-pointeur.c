#include <stdio.h>

// programme d'exemple d'utilisation d'un pointeur dans un programme c.
int main(void) {
    // déclaration d'une variable de type INT
    int a = 1;
    // déclaration d'un pointeur pointant vers la variable
    int * pointeur_vers_a = &a;

    // utilisation de la variable et du pointeur, ils afficheront la même chose...
    printf("La valeur de la variable a est %d \n", a);
    printf("La valeur du pointeur vers la variable a est %d \n", *pointeur_vers_a);

    // on rajoute 1 au pointeur, donc à la variable désignée par ce pointeur...
    printf("+1 au pointeur de la variable a...\n");
    *pointeur_vers_a += 1;

    // affichage de la nouvelle valeur de la variable
    printf("La nouvelle valeur de la variable a est %d \n", a);
    return 0;
}

/*
voilà le résultat du programme une fois compilé et lancé :

La valeur de la variable a est 1 
La valeur du pointeur vers la variable a est 1 
+1 au pointeur de la variable a...
La nouvelle valeur de la variable a est 2 

*/
