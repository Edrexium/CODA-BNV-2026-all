#include <stdio.h>

int main() {
    char signe;

    printf("Choisissez un signe (+, -, /, *, %%): ");
    scanf(" %c", &signe);

    if (signe == '+') {
        printf("C'est une addition\n");
    }
    else if (signe == '-') {
        printf("C'est une soustraction\n");
    }
    else if (signe == '*') {
        printf("C'est une multiplication\n");
    }
    else if (signe == '/') {
        printf("C'est une division\n");
    }
    else if (signe == '%') {
        printf("C'est un modulo\n");
    }
    else {
        printf("Cette operation n'existe pas\n");
    }

    return 0;
}
