#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fichier = NULL;

	int score[3] = {0}; // Tableau des 3 meilleurs scores

	fichier = fopen("text/test.txt", "r");

	if(fichier != NULL)
	{
		// Position du curseur apres fopen
		printf("Position : %ld\n", ftell(fichier));

		fscanf(fichier, "%d %d %d",\
				&score[0], &score[1], &score[2]);
		// Positon du curseur apres fscanf
		printf("Position : %ld\n", ftell(fichier));

		printf("Les meilleurs scores sont : %d %d et %d"\
				, score[0], score[1], score[2]);
		fclose(fichier);
	}
	return 0;
}
