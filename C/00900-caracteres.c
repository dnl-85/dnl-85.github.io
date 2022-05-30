#include <stdio.h>
#include <string.h>

// programme permettant de manipuler des phrases (suites de caractères comprenant des espaces vides.
// au lieu d'utiliser un scanf, on utilise ici la fonction fgets. 
// la différence réside dans le fait que scanf clos la suite de caractères au premier espace trouvé,
// la fonction fgets permets de passer une phrase.
// les fonctions strlen, strncmp, strlen et strncat sont définies par la bibliothèque <string.h>.

int main(void) {
    // initialisation de 2 variables acceptant chacunes 100 caractères.
    char phrase1[100];
    char phrase2[100];
    
    // fgets a besoin de 3 infos : la variable à remplir, le nombre de caractères à retenir, et l'entrée
    // à utiliser (dans ce cas, le clavier  -  stdin )
    printf("donnez une 1ère phrase : \n");
    fgets(phrase1, 100, stdin);
    printf("donnez une 2nd phrase : \n");
    fgets(phrase2, 100, stdin);
    
    // la fonction strlen() permet de connaitre le nombre de caractères dans une variable donnée
    // ici on compare phrase1 et phrase2, si le nombre de caractères est le même, on va comparer le contenu
    // sinon on affiche une phrase disant que les 2 phrases n'ont pas le même nombre de caractères et que,
    // par conséquence, le contenu ne peut être identique.
    if (strlen(phrase1) == strlen(phrase2)) {
        printf("les 2 phrases ont la même quantité de caractères ! \n");
        // dans le cas ou le nombre de caractères est le même, on compare les 2 variables sur un nombre de
        // caractère donné. strncmp demande 3 infos : 2 variables et un nombre INT. si la fonction retourne 0,
        // alors les 2 variables sont identiques.
        // ici c'est comme si j'avais écrit : strncmp(phrase1, phrase2, 100) 
        if (strncmp(phrase1, phrase2, strlen(phrase1)) == 0) {
            printf("le contenu des 2 phrases est identique ! \n");
        } else {
            printf("le contenu des 2 phrases n'est pas identique ... \n");
        }
    } else {
        printf("les 2 phrase n'ont pas la même quantité de caractères ! le contenu ne peut donc pas être identique...\n");
    }
 
    // pour finir, une concaténation de phrase avec la fonction strncat() sur un nombre de caractère donné.
    // cette fonction demande 3 infos : 2 variables et un nombre INT.
    // ici, la concaténation de phrase1 et phrase2 se fera dans phrase1, en lisant 100 caractères dans chaque variable. 
    strncat(phrase1, phrase2, strlen(phrase1));
    printf("%s \n", phrase1);
        
    return 0;
}

/*
une fois le programe compilé, voici un résultat :

donnez une 1ère phrase : 
salut à tous !
donnez une 2nd phrase : 
salut à tous !
les 2 phrases ont la même quantité de caractères ! 
le contenu des 2 phrases est identique ! 
salut à tous !
salut à tous !

un autre essai :

donnez une 1ère phrase : 
je suis daniel
donnez une 2nd phrase : 
je suis spikye
les 2 phrases ont la même quantité de caractères ! 
le contenu des 2 phrases n'est pas identique ... 
je suis daniel
je suis spikye

ou encore :

donnez une 1ère phrase : 
hello world
donnez une 2nd phrase : 
hallo zusammen
les 2 phrase n'ont pas la même quantité de caractères ! le contenu ne peut donc pas être identique...
hello world
hallo zusamm 

à noter que lors du dernier essai, le programme a retourné 'hallo zusamm' au lieu de 'hallo zusammen' car
il n'a retenu que le nombre de caractères équivalents à la première variable (qui vaut 'hello world') et qui
est plus courte que la seconde.
*/


