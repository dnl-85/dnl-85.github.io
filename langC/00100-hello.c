#include <stdio.h>

// programme de base, un Hello World...
// la commande printf permet d'afficher un message textuel
// la commande scanf permet à l'utilisateur de saisir une valeur (int, float ou 
// char, mais pas de phrase!)
// il faut savoir que : %d pour les nombres entiers (int)
//                      %f pour les nombres réels, à virgules flottantes (float)
//                      %s pour les suites de caratères (string)
//                      %c pour le caractère dans une suite de caractères (char)
// si l'on donne un nombre réel dans une saisie ou l'on attend un nombre entier,
// ce qui se trouve après la virgule sera homis sans générer d'erreurs.

int main(void) {
    int nombre;
    printf("Hello, World !\n");
    printf("donnez un nombre : ");
    scanf("%d", &nombre);
    printf("le carré de ce nombre est : %d \n", nombre*nombre);
    return 0;
}

/* le programme doit ressembler à ceci une fois exécuté :

Hello, World !
donnez un nombre : 22
le carré de ce nombre est : 484 

*/
