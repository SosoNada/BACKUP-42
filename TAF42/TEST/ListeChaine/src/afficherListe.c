#include "../liste_chainee.h"

void afficherListe(Liste *liste)
{
	if (!liste)
		exit(EXIT_FAILURE);
	Element *actuel = liste->premier;

	while (actuel != NULL)
	{
		printf("%d ->", actuel->nombre);
		actuel = actuel->suivant;
	}
	printf("NULL\n");
}
