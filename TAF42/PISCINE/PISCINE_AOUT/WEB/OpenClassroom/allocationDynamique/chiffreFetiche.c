#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int *chiffre = NULL;

	chiffre = malloc(sizeof(int));

	if(chiffre == NULL)
		exit(0);

	printf("Quelle est votre chiffre porte bonheur ? : ");
	scanf("%d", chiffre);
	printf("Le chiffre porte-bonheur est : %d\n", *chiffre);
	
	free(chiffre);

	return 0;
}

