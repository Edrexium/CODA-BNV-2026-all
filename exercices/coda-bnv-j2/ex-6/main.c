#include <stdlib.h>
#include <stdio.h>

int main()
{
	char prenom[50];
	int age;
	int annee;

	printf("Bonjour, quel est votre prenom ?\n");
	scanf("%49s", prenom);

	printf("Bonjour %s, quel est votre age ?\n", prenom);
	scanf("%d", &age);

	annee = 2026 - age;

	printf("%s, si vous etes de la fin d'annee, votre anne de naissance est %d sinon c'est %d\n", prenom, annee, annee + 1);
	exit(0);
}
