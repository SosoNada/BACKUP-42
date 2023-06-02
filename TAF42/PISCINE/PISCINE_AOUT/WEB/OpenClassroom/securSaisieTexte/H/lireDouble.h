#ifndef LIRE_DOUBLE
#define LIRE_DOUBLE

#include <string.h>
#include <stdlib.h>
#include "lire.h"

double lireDouble()
{
	char nombreTexte[100] = "0";
	char *positionPoint = NULL;
	
	if(lire(nombreTexte, 100))
	{
		positionPoint = strchr(nombreTexte, ',');
		if(positionPoint != NULL)
			*positionPoint = '.';

		return strtod(nombreTexte, NULL);
	}
	else
		return 0;
}

#endif
