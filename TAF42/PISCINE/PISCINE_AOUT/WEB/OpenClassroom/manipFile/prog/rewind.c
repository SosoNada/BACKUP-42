#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fichier = NULL;
	int age = 0;

	fichier = fopen("../text/user.txt", "w");

	if(fichier != NULL)
	{
		// On demande l'âge
		printf("Quelle age avez-vous ? ");
		scanf("%d", &age);

		// On écrit dans le fichier
		fprintf(fichier,\
	"Le Monsieur qui utilise le programme, il a %d ans", age);
		
		// Indique la position actuel dans le fichier
		printf("%ld\n", ftell(fichier));

		// Renvoie a la positin 0 dans le fichier
		rewind(fichier);

		printf("%ld\n", ftell(fichier));

		fclose(fichier);
	}
	
	return 0;
}
