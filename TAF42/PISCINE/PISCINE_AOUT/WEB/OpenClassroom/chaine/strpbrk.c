#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char *suiteChaine;

	// On recherche la premiere occurence de x, d ou s dans 'Texte de test'
	suiteChaine = strpbrk("Texte de test", "dsxe");

	if(suiteChaine != NULL)
		printf("Voici la fin de la chaine a partir du premier des caracteres trouves : %s\n", suiteChaine);

	return 0;
}
