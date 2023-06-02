#include <stdio.h>
#include <string.h>


int main(int ac, char **av)
{
	char chaine[] = "Texte", copie[100] = "0";

	strcpy(copie, chaine);

	printf("chaine vaut %s\n", chaine);
	printf("copie vaut %s\n", copie);

	return 0;
}	
