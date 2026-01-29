#include <stdio.h>

int main() {
    // Déclaration et affectation des variables
    char chartest = 'A';
    unsigned char unsigned_chartest = 65;

    short shorttest = 12;
    unsigned short unsigned_shorttest = 20;

    int inttest = 1;
    unsigned int unsigned_inttest = 10;

    long int longinttest = 123;
    unsigned long int unsigned_longinttest = 200;

    long long int longlonginttest = 12345667;
    unsigned long long int unsigned_longlonginttest = 123456789;

    float floattest = 23.3f;  // Le 'f' indique que c'est un float
    double doubletest = 45.45;
    long double longdoubletest = 456.456;

    // Affichage des variables avec printf
    printf("Valeur de chartest : %c\n", chartest);
    printf("Valeur de unsigned_chartest : %u\n", unsigned_chartest);

    printf("Valeur de shorttest : %d\n", shorttest);
    printf("Valeur de unsigned_shorttest : %u\n", unsigned_shorttest);

    printf("Valeur de inttest : %d\n", inttest);
    printf("Valeur de unsigned_inttest : %u\n", unsigned_inttest);

    printf("Valeur de longinttest : %ld\n", longinttest);
    printf("Valeur de unsigned_longinttest : %lu\n", unsigned_longinttest);

    printf("Valeur de longlonginttest : %lld\n", longlonginttest);
    printf("Valeur de unsigned_longlonginttest : %llu\n", unsigned_longlonginttest);

    printf("Valeur de floattest : %f\n", floattest);
    printf("Valeur de doubletest : %f\n", doubletest);
    printf("Valeur de longdoubletest : %Lf\n", longdoubletest);

    return 0;
}
