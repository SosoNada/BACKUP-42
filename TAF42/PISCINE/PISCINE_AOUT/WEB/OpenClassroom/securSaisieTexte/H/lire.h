#ifndef LIRE
#define LIRE

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // inclure string.h pour strchr()
#include "viderBuffer.h"



int lire(char *str, int longueur)
{
	char *positionEntree = NULL;
	// On lit le texte saisi au clavier
	if(fgets(str, longueur, stdin) != NULL) /* Pas d'erreurs 
						** de saisie ? */
	{
		// On recherche l'"Entré"
		positionEntree = strchr(str, '\n');
		if(positionEntree != NULL) // Si on a trouve '\n'
			// On remplace '\n' par '\0'
			*positionEntree = '\0';
		else
			// Si chaîne trop longue (pas de '\n' trouvé)
			viderBuffer(); // On vide le buffer
		return 1; // Renvoie 1 si tout s'est passé sans erreur
	}
	else
		// Si il y a eu une erreurs, on vide buffer par sécu
		viderBuffer();
	return 0; // Renvoie 0 si il y eu une erreur
}
		
#endif
