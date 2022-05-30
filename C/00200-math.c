#include <stdio.h>
#include <math.h>

// ce programme fait appel à la fonction 'pow' de math.h
// ici j'utilise un scanf qui s'attend à un nombre à virgule flottante.
// si un nombre entier 'int' est donné, celui-ci sera convertie automatiquement en 'float'

int main(void) {
    float nombre;
    printf("donnez un nombre : ");
    scanf("%f", &nombre);
    printf("le cube de ce nombre est : %f \n", pow(nombre, 3));
    return 0;
}

/* 
pour la compilation, rajoutez l'option -lm à la fin de la commande gcc, pour pouvoir intégrer 
le module math.h au programme executable.

le résultat de ce programme devrait donner ceci :

donnez un nombre : 9
le cube de ce nombre est : 729.000000 

ou encore ceci :

donnez un nombre : 9.1
le cube de ce nombre est : 753.571095 

*/
