#include <stdio.h>
#include <stdlib.h>
#include "liste_chainee.h"


int main()
{
	Liste	*maListe = initialisation();
	
	insertion(maListe, 4);
	maListe->nbElement++;
	insertion(maListe, 8);
	maListe->nbElement++;
	insertion(maListe, 15);
	maListe->nbElement++;

	insertionNext(maListe, maListe->premier->suivant->suivant, 20);
	maListe->nbElement++;
	
	//listeClear(maListe);
	afficherListe(maListe);
	printf("Nombre d'element = %d\n", maListe->nbElement);

	return 0;
}
