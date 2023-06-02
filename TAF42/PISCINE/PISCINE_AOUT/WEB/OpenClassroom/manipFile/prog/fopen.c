#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE* fichier = NULL;
	FILE *fichier2 = NULL;

	fichier = fopen("test.txt", "w");
	fichier2 = fopen("mms.txt", "w");

	if(fichier != NULL)
	{
		fputc('s', fichier); // Ecriture du caractere s
		fclose(fichier); 

	}
	else
		printf("Impossible d'ouvrir le fichier test.txt");

	
	if(fichier2 != NULL)
	{
		fputs("Salut les développeurs\
				\nBienvenue sur OpenClassrooms !", fichier2);
		fclose(fichier2);
	}
	else
		printf("Impossible d'ouvrir le fichier mms.txt");


	return 0;
}
