#include <stdio.h>

int main() {
    char symbole;
    int nombre;
    int i = 0;

    printf("Choisissez un symbole (+ ou -) : ");
    scanf(" %c", &symbole);

    printf("Choisissez un nombre different de 0 : ");
    scanf("%d", &nombre);

    if (symbole == '+') {
        while (i <= nombre) {
            printf("%d\n", i);
            i++;
        }
    }
    else if (symbole == '-') {
        i = nombre;

        while (i >= 0) {
            printf("%d\n", i);
            i--;
        }
    }
    else {
        printf("Symbole non reconnu\n");
    }

    return 0;
}
