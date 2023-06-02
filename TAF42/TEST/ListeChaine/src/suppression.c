#include "../liste_chainee.h"

void suppression(Liste *liste)
{
	if (!liste)
		exit(EXIT_FAILURE);
	if (liste->premier != NULL)
	{
		Element *aSupprimer = liste->premier;
		liste->premier = liste->premier->suivant;
		free(aSupprimer);
	}
}
