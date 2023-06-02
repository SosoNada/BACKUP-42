#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char chaine[] = "Texte de test", *suiteChaine = NULL;

	suiteChaine = strchr(chaine, 'd');

	if(suiteChaine != NULL)
		printf("Voici la fin de la chaine a partir du premier 'd':\n %s\n", suiteChaine);

	return 0;
}
