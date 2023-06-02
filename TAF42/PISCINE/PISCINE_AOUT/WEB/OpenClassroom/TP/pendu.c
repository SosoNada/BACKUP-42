#include "lib.h"

int main(int argc, char *argv[])
{
	char lettre = 0; 
	char *motSecret = "SOFIANE";
	int coupRestant = 10; 
	int nombreLettres = tailleMot(motSecret);
	int *lettreTrouvee = NULL;
	lettreTrouvee = malloc(nombreLettres * sizeof(int));
	initTableau(lettreTrouvee, nombreLettres);
	

	printf("Bienvenue dans le Pendu !\n");

	while(coupRestant > 0 && !gagne(lettreTrouvee, nombreLettres))
	{
		printf("\n\nIl vous reste %d coups a jouer", \
				coupRestant);
		printf("\nQuel est le mot secret ? ");

		for(int i = 0; i < nombreLettres; i++)
		{
			if(lettreTrouvee[i] == 1)
				printf("%c", motSecret[i]);
			else
				printf("*");
		}

		printf("\nProposez une lettre : ");
		lettre = lireCaractere();

		if(!rechercheLettre(lettre, motSecret, lettreTrouvee))
			coupRestant--;

	}
	if(coupRestant == 0)
		printf("\n\nPerdu ! Le mot secret etait : %s", \
				motSecret);
	else
		printf("\n\nGagne ! le mot secret etait bien %s", \
				motSecret);
	
	free(lettreTrouvee);
	
	return 0;
}

