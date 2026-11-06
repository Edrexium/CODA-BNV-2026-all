#include <stdlib.h>
#include <stdio.h>

int main()
{
	char mot[50];
	int i = 0;

	printf("Saisir un mot : ");
	scanf("%49s", mot);

	while(i < 5) {
	printf("%s\n", mot);
	i++;
  }

	exit(0);
}
