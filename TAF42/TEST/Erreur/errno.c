#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
	FILE *f;
	int errnum;

	// Stockage de la valeur acutelle de errno
	errnum = errno;
	printf("La valeur de errno avant premiere fonction : [%d]\n", errnum);

	// Apelle dune fonction qui definie errno
	f = fopen("file.txt", "r");

	// deuxiemme fonction qui peut definir errno
	if (f == NULL) {
		errnum = errno; //stock errno avant d'appler perror
		fprintf(stderr, "Erreur [%d] : %s\n", errnum, strerror(errno));
		//printf("La valeur de errno apres premiere fonction : [%d]\n", errnum);
		perror("Erreur d'ouverture de fichier");
		errnum = errno;
		printf("La valeur de errno apres deuxiemme fonction : [%d]\n", errnum);
		exit(EXIT_FAILURE);
	}

	// Si les deux fonctions on reussi
	printf("Les deux focntions on reussi.\n");
	fclose(f);

	return 0;
}


	
