#include "../H/lire.h"

int main(int ac, char **av)
{
	char nom[10];

	printf("Quel est votre nom ? ");
	lire(nom, 10);
	printf("Ah ! Vous vous appelez donc %s !\n", nom);

/*	On verifie si le buffer contient des traces de notre saisie
**	lire(nom, 10);
**	printf("Ah ! Vous vous appelez donc %s !\n", nom); */

	return 0;
}
