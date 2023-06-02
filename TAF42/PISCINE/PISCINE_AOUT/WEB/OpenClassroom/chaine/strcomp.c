#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char chaine1[] = "Tcxte de test", chaine2[] = "Texte de test";

	if(strcmp(chaine1, chaine2) == 0) // si chaine identique
		printf("%d Les chaines sont identiques\n", strcmp(chaine1, chaine2));
	else
		printf("%d Les chaines sont differentes\n", strcmp(chaine1, chaine2));

	return 0;
}	
