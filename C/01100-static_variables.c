#include <stdio.h>

int compteur() {
    static int compte = 0;
    compte++;
    return compte;
}

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("le compteur est à : %d \n", compteur());
    }
    return 0;
}
