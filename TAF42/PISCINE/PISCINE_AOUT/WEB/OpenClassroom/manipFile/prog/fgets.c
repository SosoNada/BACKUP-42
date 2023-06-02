#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000 // Tableau de taille 1000

int main(int argc, char *argv[])
{
	FILE *fichier = NULL;

	// Chaine vide taille TAILLE_MAX
	char chaine[TAILLE_MAX] = ""; 

	fichier = fopen("mms.txt", "r");

	if(fichier != NULL)
	{
		/* On lit maximum TAILLE_MAX \
		caractères du fichier, \
		on stocke le tout dans "chaine"*/
		fgets(chaine, TAILLE_MAX, fichier);
	
		// On affiche la chaîne
		printf("%s", chaine);

		fclose(fichier);
	}

	return 0;
}
