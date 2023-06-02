#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	char nom[10];

	printf("Quel est votre nom ? ");
	fgets(nom, 10, stdin);
	printf("Ah ! Vous vous appelez donc %s !\n\n", nom);

	return 0;
}
