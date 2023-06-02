#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char chaine[] = "Salut";
	int len_c = 0;

	len_c = strlen(chaine);

	printf("La chaine %s fait %d de long" , chaine, len_c);

	return 0;
}	
