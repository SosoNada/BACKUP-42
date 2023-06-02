#include <stdio.h>
#include <stdlib.h>

#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{
	FILE *fichier = NULL;
	
	char chaine[TAILLE_MAX] = "";

	fichier = fopen("mms.txt", "r");

	if(fichier != NULL)
	{
		/* On lit le fichier tant qu'
		on ne reçoit pas d'erreur (NULL)*/
		while(fgets(chaine, TAILLE_MAX, fichier) != NULL)
			/* On affiche la chaîne qu'on vient 
			 de lire*/
			printf("%s", chaine);
		fclose(fichier);
	}

	return 0;
}
