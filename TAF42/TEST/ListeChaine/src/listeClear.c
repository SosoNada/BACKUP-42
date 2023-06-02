#include "../liste_chainee.h"

void listeClear(Liste *liste)
{
	Element	*temp;

	if (!liste)
		exit(EXIT_FAILURE);
	Element	*ptr = liste->premier;
	while (ptr != NULL)
	{
		temp = ptr->suivant;
		free(ptr);
		ptr = temp;
	}
	ptr = NULL;
	free(liste);
}

