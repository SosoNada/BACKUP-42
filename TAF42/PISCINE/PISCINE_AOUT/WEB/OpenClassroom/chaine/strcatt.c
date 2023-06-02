#include <stdio.h>
#include <string.h>


int main(int ac, char **av)
{
	char chaine1[100] = "Salut ", chaine2[] = "Sofiane";

	strcat(chaine1, chaine2);

	printf("chaine1 vaut %s\nchaine2 vaut toujours %s\n", chaine1, chaine2);

	return 0;
}
