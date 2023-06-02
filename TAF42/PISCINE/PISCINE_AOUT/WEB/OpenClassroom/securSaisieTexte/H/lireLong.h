#ifndef LIRE_LONG
#define LIRE_LONG

#include <stdlib.h>
#include "lire.h"

long lireLong()
{
	char nombreTexte[100] = "0"; 

	if(lire(nombreTexte, 100))

			/* Si la lecture du texte ok, 
			** on convertit en long et on le return */
			return strtol(nombreTexte, NULL, 10);
	else
		return 0; // Si probleme de lecture on renvoie 0
}

#endif
