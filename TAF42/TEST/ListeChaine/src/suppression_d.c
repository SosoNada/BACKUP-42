#include "../liste_chainee.h"

void	suppression_d(Liste *liste, Element *aSupprimer)
{
	if(!liste || !aSupprimer)
		exit(EXIT_FAILURE);

	Element	*ptr = liste->premier;
	

	while (ptr != aSupprimer)
	{
		if (ptr->suivant == NULL)
			exit(EXIT_FAILURE);
		ptr = ptr->suivant;
	}
	Element *del = ptr->suivant;
	ptr->suivant = ptr->suivant->suivant;
	free(del);
}
