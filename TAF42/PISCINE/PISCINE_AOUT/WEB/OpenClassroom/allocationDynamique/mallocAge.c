#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int *memoireAllouee = NULL;

	memoireAllouee = malloc(sizeof(int)); // Allocation de 
					      // memoire
	if(memoireAllouee == NULL)
		exit(0);
	
	// Utilisation de mémoire
	printf("Quel age avez-vous ? ");
	scanf("%d", memoireAllouee);
	printf("Vous avez %d ans\n", *memoireAllouee);

	free(memoireAllouee); // Libération de mémoire

	return 0;
}
