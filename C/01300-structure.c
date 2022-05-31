#include <stdio.h>

// utilisation de la fonction struct, qui permet en gros de créer des 'objets'.
// ce sont des 'objets' assez simple en C, ceci permet de définir des attributs 
// à une variable...

int main(void) {
    // définition d'une structure 'voiture' comprenant plusieurs attributs
    typedef struct {
        int roues;
	int moteur;
	int places;
    } voiture;

    // définition d'une variable-objet 'V', à laquelle on donne une valeur à 
    // chaque attribut.
    voiture V;
    V.roues = 4;
    V.moteur = 1;
    V.places = 5;

    // une fois définit, il est possible de s'en servir
    printf("La voiture V a %d roues.\n", V.roues);
    printf("La voiture V a %d moteur.\n", V.moteur);
    printf("La voiture V a %d places.\n", V.places);

    return 0; 
}

/*
le programme compilé et exécuté est sensé retourner ceci :

La voiture V a 4 roues.
La voiture V a 1 moteur.
La voiture V a 5 places.

*/
