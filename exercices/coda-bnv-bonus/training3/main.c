#include <stdio.h>

int main() {

	char prenom[50] = "Eden"; 

	printf(" Ton prenom : ");
	scanf("%49s\n", prenom);

	printf("Bonjour %s\n", prenom);

    	return 0;
}
