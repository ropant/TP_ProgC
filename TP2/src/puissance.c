#include <stdio.h>

int main() {
    int a = 3;
    int b = 4;
    int c = a;

    for (int i = 0; i < b; i++) {
        c *= a;  // Multiplie c par a à chaque itération
    }

    printf("%d\n", c);  // Affiche la valeur de c

    return 0;
}
