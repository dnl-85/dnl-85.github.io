#include <stdio.h>

// il est possible également de passer des arguments depuis l'invite de commande $bash ou DOS
// dans nos programmes. la technique est très simple...
// il faut savoir que : - 'int argc' sera un nombre entier, il compte le nombre d'arguments passés 
//                      lors de l'appel de notre programme.
//                      - le premier argument de la liste sera toujours le nom du programme lui-même.
//                      - 'char * argv[]' sera la suite des arguments passés en tant que tel.

int main(int argc, char * argv[]) {
    printf("Hello, World ! \n");

    // définition d'un entier pour boucler sur la suite des arguments avec la commande 'for'
    int i;
    // on définit i = 1; la boucle va tourner tant que i est inférieur à argc; et i va augmenter de 1
    // à chaque tour de la bouche 'for'. 
    // à chaque tour, le programme va afficher une ligne supplémentaire pré-formatée.
    for(i = 1; i < argc ; i ++) {
        printf("+ boujour à  %s \n", argv[i]);
    }
    
    // et pour finir, le programme va afficher le nombre d'arguments passés lors de l'appel.
    printf("il y a eu %d argument(s) passé(s) lors de l'appel du programme...\n", argc);
    return 0;
}
    
/* si j'exécute le porgramme avec la commande suite :

    $ ./arguments.c_build_lnx64 daniel spike 'tout le monde'

le résultat dans le terminal doit être :

    Hello, World ! 
    + boujour à  daniel 
    + boujour à  spike 
    + boujour à  tout le monde 
    il y a eu 4 argument(s) passé(s) lors de l'appel du programme...

note: le programme compte effectivement 4 arguments : 
- 1> le nom du programme : ./arguments.c_build_lnx64
- 2> argument 1          : daniel
- 3> argument 2          : spike
- 4> argument 3          : 'tout le monde'

à noter qu'une phrase passée au programme entre guillemets compte pour 1 seul argument !

si l'on remplace 'i = 1' par 'i = 0' dans l'instruction 'for', le programme va rajouter une ligne 
supplémentaire disant :

    + bonjour à  ./arguments.c_build_lnx64
*/

