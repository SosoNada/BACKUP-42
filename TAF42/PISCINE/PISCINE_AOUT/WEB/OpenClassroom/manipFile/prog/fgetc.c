#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fichier = NULL;
	int caractereActuel = 0;

	fichier = fopen("user.txt", "r");

	if(fichier != NULL)
	{
		// Boucle de lecture des caractères un à un
		do
		{
			// On lit le caractère
			caractereActuel = fgetc(fichier);
		       	//On l'affiche
			if(caractereActuel != EOF)
				printf("%c", caractereActuel);
		}while(caractereActuel != EOF); 
		// On continue tant que fgetc n'a pas retourné EOF
		
		fclose(fichier);
	}

	return 0;
}
