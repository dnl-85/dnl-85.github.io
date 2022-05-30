#include <stdio.h>

// programme permettant d'expérimenter les boucles 'while'.
// une boucle while continuera tant que la condition d'arrêt n'est pas atteinte
// ou tant qu'un arret 'break' n'est pas déclenché à un évenement donné...

int main() {
    // tant que n vaut moins de 10, la boucle va afficher chaque nombre.
    int n = 0;
    while (n < 10) {
        printf("%d - ", n);
        n++;
    }
    
    // à l'inverse, tant que m est supérieur à 0, la boucle va afficher chaque nombre.
    printf("\n");
    int m = 10;
    while (m > 0) {
        printf("%d - ", m);
        m--;
    }
    
    // la boucle est vraie (true ou 1) tant qu'il n'y a pas de 'break' à un évènement donné.
    // ici , le break se fera quand o vaudra 20.
    // à noter aussi qu'il existe un mot clé 'continue' qui indique explicitement de continuer
    // à boucler...
    printf("\n");
    int o = 0;
    while (1) {
        o++;
        printf("%d - ", o);
        if (o == 20) {
            printf("arrêt de la boucle au nombre programmé !");
            break;
        }
    }    
    printf("\n");
    return 0;
}

/*
un essai du programme compilé est sensé donné ceci :

0 - 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 - 
10 - 9 - 8 - 7 - 6 - 5 - 4 - 3 - 2 - 1 - 
1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9 - 10 - 11 - 12 - 13 - 14 - 15 - 16 - 17 - 18 - 19 - 20 - arrêt de la boucle au nombre programmé !

*/
