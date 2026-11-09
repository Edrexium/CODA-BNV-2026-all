#include <stdio.h>

int add(int nb1, int nb2)
{

return(nb1 + nb2);
}
void print_str(char *str)
{
        printf("%s\n", str);
}

int main(void)
{

int resultat;

	resultat = add(10, 5);
	printf("Resultat : %d\n", resultat);

        print_str("");
        return 0;
}
