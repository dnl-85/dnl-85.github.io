#include <stdio.h>
#include <math.h>
#include <time.h>

// ce programme fait appel aux librairies math.h et time.h
// il permet de savoir comment afficher l'heure et la date d'un moment donné
// et il permet aussi de tester la compilation d'un programme avec plusieurs librairies utilisées

int main(void) {
    // définition des variables qui vont contenir les heures, minutes, secondes, jours, mois et années
	int hr, min, sec, jour, mois, an;
	// définition de la variable 'now' de type time_t qui va contenir l'instant
	time_t now;
	
	// renvoie l'heure et la date actuelle dans la variable 'now'
	time(&now);
	// convertion au format heure locale avec la fonction ctime
	printf("instant T : %s", ctime(&now));
	
	// définition d'une structure qui va renseigner les variables définit plus haut
	struct tm *local = localtime(&now);
	hr = local->tm_hour;
	min = local->tm_min;
	sec = local->tm_sec;
	jour = local->tm_mday;
	mois = local->tm_mon + 1;
	an = local->tm_year + 1900;
	
	// affichage formaté
	printf("Heure : %02d:%02d:%02d\n", hr, min, sec);
	printf("Date  : %02d/%02d/%02d\n", jour, mois, an);
	
	// puis pour finir, une petite sollicitation d'une fonction de math.h
    float nombre;
    printf("donnez un nombre : ");
    scanf("%f", &nombre);
    printf("le cube de ce nombre est : %f \n", pow(nombre, 3));
    
    return 0;
}
    
/* ce programme ressemble à ceci une fois exécuté :

instant T : Sun May 22 09:38:57 2022
Heure : 09:38:57
Date  : 22/05/2022
donnez un nombre : 1426
le cube de ce nombre est : 2899736776.000000 

*/

