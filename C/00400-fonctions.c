#include <stdio.h>

// programme utilisant des appels de fonctions :
// la fonction principale d'un programme en C restera toujours 'main'
// cette fonction sera appelée à chaque démarrage du programme.
// 
// il est possible également de définir d'autres fonctions dans nos programmes
// mais il faut les déclarer avant la fonction main() au préalable pour qu'elles soient
// prisent en compte par le compilateur.

// déclaration des fonctions présentes dans le programme :
int fonction_a(void);
int fonction_b(int v);

// définition de la fonction main()
int main(void) {
    // attribution de la valeur de la fonction_a à la variable val_a
    int val_a = fonction_a();
    
    // un petit message pour commencer...
    printf("Hello, World !\n");
    // le résultat de l'appel de fonction_a()...
    printf("La seconde fonction retourne la valeur suivante : %d\n", fonction_a());
    // le résultat de l'appel de la fonction_b() à qui on donne comme valeur à traiter la variable val_a
    printf("La troisieme fonction retourne la valeur cubique de la fonction_a : %d\n", fonction_b(val_a));
    
    return 0;
}

// définition d'une fonction 'a', qui va afficher un message et retourner un chiffre entier.
int fonction_a(void) {
    printf("ce message provient de la seconde fonction du programme !\n");
    return 2;
}

// définition d'une fonction 'b', qui va retourner le cube d'un nombre passé en
// variable ('v') lors de l'appel de la fonction
int fonction_b(int v) {
    return v * v * v;
}
    
/* le programme est sensé retourner ceci :

ce message provient de la seconde fonction du programme !
Hello, World !
ce message provient de la seconde fonction du programme !
La seconde fonction retourne la valeur suivante : 2
La troisieme fonction retourne la valeur cubique de la fonction_a : 8

ceci permet de se faire une idée de quand sont lues les différentes fonctions dans le programme
*/

    
