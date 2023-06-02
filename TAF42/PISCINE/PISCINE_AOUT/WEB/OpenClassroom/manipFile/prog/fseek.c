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

		/* Place le curseur quatre caracteres avant 
		   la position courante*/
		fseek(fichier, -4, SEEK_CUR);	

		printf("%ld\n", ftell(fichier));

		// Place le curseur quatre caracteres apres le debut
		fseek(fichier, 4, SEEK_SET);	

		printf("%ld\n", ftell(fichier));

		// Place le curseur à la fin du fichier
		fseek(fichier, 0, SEEK_END);

		printf("%ld\n", ftell(fichier));

		fclose(fichier);
	}
	
	return 0;
}
