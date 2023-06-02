#include <stdio.h>

int main(int ac, char **av)
{
	printf("Erreur a la ligne %d du fichier %s\n", \
	__LINE__, __FILE__);
	printf("Ce fichier a ete compile le %s a %s\n", \
	__DATE__, __TIME__);

	return 0;
}	
