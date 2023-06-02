#include "../liste_chainee.h"

void insertion(Liste *liste, int nvNombre)
{
	Element	*nouveau = malloc(sizeof(*nouveau));

	if (!liste || !nouveau)
		exit(EXIT_FAILURE);
	nouveau->nombre = nvNombre;
	
	nouveau->suivant = liste->premier;
	liste->premier = nouveau;
}
