#include <stdio.h>

// avant de commencer, il faut bien comprendre que :
// élément du tableau définit  :  a  b  c  d  e  f
//                                |  |  |  |  |  |
// numéro d'indexation machine :  0  1  2  3  4  5
//                                |  |  |  |  |  |
// pour un humain              :  1  2  3  4  5  6
// mais la machine n'est pas humaine, donc il faut impérativement penser 'machine'
    
int main(void) {
    // pour définir un tableau multi-dimensionnel, par exemple : 4 groupes de 4 valeurs 
    // puis faire appel à certains éléments.
    // rappel : l'indexation se fait toujours à partir de 0 !
    int tableau[4][4] = {
        {1, 2, 3, 4},               // ligne 0
        {5, 6, 7, 8},               // ligne 1
        {9, 10, 11, 12},            // ligne 2
        {13, 14, 15, 16},           // ligne 3
    };

    printf("valeur ligne1, colonne2 : %d \n", tableau[0][1]);
    printf("valeur ligne3, colonne3 : %d \n\n", tableau[2][2]);

    // il faut savoir qu'en C, une suite de caracteres (string) est concidérée comme un tableau
    // elle peut être définit de 2 manières différentes 
    // rappel : l'indexation se fait toujours à partir de 0 !
    char autre[10] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
    char caractere = autre[2];
    printf("la chaine contient les elements suivants : %s \n", autre);
    printf("valeur de la 3eme lettre de la chaine : %c \n\n", caractere);

    // ou encore ... 
    char essai[] = "azerty";
    printf("la chaine contient les elements suivants : %s \n", essai);
    char lire = essai[3];
    printf("valeur de la 4eme lettre de la chaine : %c \n\n", lire);

    printf("fin du programme... \n");
    return 0;
}
    
/* ce programme est sensé retourner le résultat suivant dans le terminal :

valeur ligne1, colonne2 : 2 
valeur ligne3, colonne3 : 11 

la chaine contient les elements suivants : abcdef 
valeur de la 3eme lettre de la chaine : c 

la chaine contient les elements suivants : azerty 
valeur de la 4eme lettre de la chaine : r 

fin du programme... 
*/
