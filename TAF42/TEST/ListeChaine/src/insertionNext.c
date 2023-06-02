#include "../liste_chainee.h"

void insertionNext(Liste *liste, Element *add_next, int nvNombre)
{
	Element *nouveau = malloc(sizeof(*nouveau));

	if(!liste || !add_next || !nvNombre)
		exit(EXIT_FAILURE);

	nouveau->nombre = nvNombre;

	Element *add = liste->premier;

	while (add != add_next)
		add = add->suivant;
	nouveau->suivant = add_next->suivant;
	add_next->suivant = nouveau; 
}


