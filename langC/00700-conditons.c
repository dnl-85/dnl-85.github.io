#include <stdio.h>

// ce programme permet de tester des conditions en utilisant IF, ELSE IF et ELSE
// rappel - les opérateurs logiques en C sont les suivants :
//     >    strictement supérieur à ...
//     >=   supérieur ou égale à ...
//     <    strictement inférieur à ...
//     <=   inférieur ou égale à ...
//     ==   égale à ...
//     !=   différent de, ou pas égale à... (NOT)
//     &&   et ... (AND)     
//     ||   ou ... (OR)

int main(void) {
    int nombre_a;
    int nombre_b;

    printf("donnez un premier nombre : ");
    scanf("%d", &nombre_a);
    printf("donnez un second nombre : ");
    scanf("%d", &nombre_b);

    printf("\n");
    printf("résultat de la première condition : \n");
    if (nombre_a > nombre_b) {
        printf("le premier nombre est plus grand que le second !");
    } else if (nombre_a < nombre_b) {
        printf("le premier nombre est plus petit que le second !");
    } else if (nombre_a == nombre_b) {
        printf("le premier nombre est égal au second !");
    } else {
        printf("... difficile à dire ...");
    }

    printf("\n");
    printf("\nrésultat de la seconde condition : \n");
    if (nombre_a + nombre_b >= 100) {
        printf("la somme des 2 nombres est supérieure ou égale à 100 ...");
    } else if (nombre_a + nombre_b <= 99) {
        printf("la somme des 2 nombres est inférieure ou égale à 99 ...");
    } else {
        printf("... difficile à dire ...");
    }
    
    printf("\n");
    printf("\nrésultat de la troisième condition : \n");
    if (nombre_a + nombre_b >= 100 || nombre_a - nombre_b >= 100) {
        printf("la somme OU la soustraction des deux nombres vaut + de 100 ...");
    } else {
        printf("la somme OU la soustraction des deux nombres vaut - de 100 ...");
    }
    
    printf("\n");
    printf("\nrésultat de la quatrième condition : \n");
    if (nombre_a + nombre_b >= 100 && nombre_a - nombre_b >= -100) {
        printf("la somme ET la soustraction des deux nombres vaut + de 100 ou - de 100 ...");
    } else {
        printf("la somme ET la soustraction des deux nombres se situe entre 100 et -100 ...");
    }
 
    printf("\n");
    printf("\nrésultat de la cinquième condition : \n");
    if (nombre_a != 0 && nombre_b != 0) {
        printf("aucun des 2 nombres ne vaut zéro ...");
    } else {
        printf("un des 2 nombres vaut zéro ...");
    }

    printf("\n\n");
    return 0;
}
    
/* 
une petite compilation du programme et un essai suffit à comprendre comment ça marche...
*/

