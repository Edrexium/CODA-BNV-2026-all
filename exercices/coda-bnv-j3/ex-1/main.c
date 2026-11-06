
#include <stdio.h>

int main() {
    int nombre;

    printf("Choisissez un nombre : ");
    scanf("%d", &nombre);

    if (nombre > 42) {
        printf("Le nombre est superieur a 42\n");
    }
    else if (nombre == 42) {
        printf("Le nombre est egal a 42\n");
    }
    else {
        printf("Le nombre est inferieur a 42\n");
    }

    return 0;
}
