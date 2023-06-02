#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int *memoireAllouee = NULL;

	// malloc inscrit dans le pointeur l'adresse réservé
	memoireAllouee = malloc(sizeof(int));
	
	if(memoireAllouee == NULL) // Verif si allouee
		exit(0); // Erreur, on arrete

	printf("Allocation réussi");

	free(memoireAllouee); // On libère la mémoire

	return 0;
}
