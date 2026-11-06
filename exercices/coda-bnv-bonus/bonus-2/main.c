#include <stdio.h>

int main() {
    int nombre;

    do {
        printf("Choisissez un nombre entre 2 et 20 : ");
        scanf("%d", &nombre);
    } while (nombre < 2 || nombre > 20);

    unsigned long long factorielle = 1;
    int i = 1;

    while (i <= nombre) {
        factorielle = factorielle * i;
        i = i + 1;
    }

    printf("%d! = %llu\n", nombre, factorielle);

    return 0;
}
