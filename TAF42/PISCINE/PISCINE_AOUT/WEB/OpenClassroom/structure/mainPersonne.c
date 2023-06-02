#include <stdio.h>
#include <stdlib.h>
#include "Personne.h"

int main(int argc, char *argv[])
{
	Personne utilisateur[2];
	int i = 0;

	while(i++ < 2)
	{
		printf("Quel est votre nom ? ");
		scanf("%s", utilisateur[i].nom);
		printf("votre prénom ? ");
		scanf("%s", utilisateur[i].prenom);
	
		printf("Vous vous appelez %s %s\n", \
		utilisateur[i].prenom,\
		utilisateur[i].nom);
			
	}

	i = 0;

	printf("Prénom:\n");

	while(i++ < 2)
		printf("   - %s\n", utilisateur[i].prenom);
	return 0;

}	
