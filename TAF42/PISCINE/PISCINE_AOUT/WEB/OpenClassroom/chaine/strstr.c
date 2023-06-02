#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char *suiteChaine;

	// On recherche la premiere occurence de 'test' dans 'Texte de test'
	suiteChaine = strstr("Texte de test", "de");

	if(suiteChaine != NULL)
		printf("Premiere occurence de test dans Texte de test : %s\n", suiteChaine);
	
	return 0;
}
