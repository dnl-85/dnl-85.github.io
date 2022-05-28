#include <stdio.h>

// ce programme montre ce qu'il est possible de faire avec une boucle 'for'.
// en utilisant un tableau contenant 10 valeurs, ce programme va afficher 
// chaque valeur lue, dans un sens comme dans l'autre...

int main(void) {
	int tableau[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	// compter les valeurs de 1 à 10 en augmentant de 1 à chaque boucle.
	// i commence à 0, et tant que i est inférieur à 10, la boucle continue...
	int i;
	for (i = 0; i < 10; i++) {
		printf(" %d - ", tableau[i]);
	}
	printf("\n");
	
	// compter les valeurs de 10 à 1 en diminuant de 1 à chaque boucle.
	// j commence à 9, et tant que j est supérieur à -1, la boucle continue...
	int j;
	for (j = 9; j > -1; j--) {
		printf(" %d - ", tableau[j]);
	}
	printf("\n");
	
	// compter les valeurs de 1 à 10 en augmentant de 2 à chaque boucle.
	// k commence à 0, et tant que k est inférieur à 10, la boucle continue...
	int k;
	for (k = 0; k < 10; k = k + 2) {
		printf(" %d - ", tableau[k]);
	}
	printf("\n");
	
	// compter les valeurs de 10 à 1 en diminuant de 2 à chaque boucle.
	// l commence à 9, et tant que l est supérieur à -1, la boucle continue...
	int l;
	for (l = 9; l > -1; l = l - 2) {
		printf(" %d - ", tableau[k]);
	}
	printf("\n");
	
	return 0;					 
}

/* au final, ce programme doit retourner ceci :

 1 -  2 -  3 -  4 -  5 -  6 -  7 -  8 -  9 -  10 - 
 10 -  9 -  8 -  7 -  6 -  5 -  4 -  3 -  2 -  1 - 
 1 -  3 -  5 -  7 -  9 - 
 10 -  8 -  6 -  4 -  2 - 


NOTE : tableau vaut {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
					 |  |  |  |  |  |  |  |  |  |
indexation machine : 0  1  2  3  4  5  6  7  8  9
*/
