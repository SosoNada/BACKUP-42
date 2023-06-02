#include <stdio.h>

int ft_len(const char *str)
{
	int i = 0;
	
	do
		i++;
	while(str[i]);

	return i;
}

int main(int ac, char **av)
{
	char chaine[] = "Salut l'ami";

	int longueur = 0;

	longueur = ft_len(chaine);

	printf("La chaine %s fait %d caracteres de long", chaine, longueur);
       	
	return 0;
}	
