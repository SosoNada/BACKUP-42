#include "../liste_chainee.h"

Liste *initialisation()
{
	Liste	*liste = malloc(sizeof(*liste));
	Element *element = malloc(sizeof(*element));

	if (!liste || !element)
		exit(EXIT_FAILURE);
	element->nombre = 0;
	element->suivant = NULL;
	liste->premier = element;

	return liste;
}
