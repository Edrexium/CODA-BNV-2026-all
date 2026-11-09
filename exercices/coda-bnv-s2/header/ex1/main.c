#include <stdio.h>
#include "functions.h"

int calculate_sum(void)
{
    int number;
    int sum = 0;

    while (1)
    {
        printf("Entrez un nombre (0 pour arrêter) : ");
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        sum = add(sum, number);
    }

    return sum;
}

int main(void)
{
    int result = calculate_sum();

    printf("Resultat : %d\n", result);

    return 0;
}
