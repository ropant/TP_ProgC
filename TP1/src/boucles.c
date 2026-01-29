#include <stdio.h>

int main() {
    int lignes = 5; // Nombre de lignes du triangle

    for (int i = 0; i < lignes; i++) {
        for (int y = 0; y <= i; y++) {
            printf("*");
        }
        printf("\n"); // Passer à la ligne suivante après chaque ligne d'étoiles
    }
    return 0;
}
