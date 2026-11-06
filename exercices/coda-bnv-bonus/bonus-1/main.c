#include <stdio.h>

int main() {
    int nombre;

    printf("Choisissez un nombre entre 0 et 100 : ");
    scanf("%d", &nombre);

    int i = 0;

    while (i <= nombre) {
        printf("%d\n", i);
        i = i + 5;
    }

    return 0;
}
