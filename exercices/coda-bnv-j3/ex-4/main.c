#include <stdio.h>

int main() {
    int nombre;
    int i = 0;

    printf("Saisissez un nombre différent de 0 : ");
    scanf("%d", &nombre);

    while (i <= nombre) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
