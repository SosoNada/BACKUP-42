#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char chaine[100];

	int age = 15; 

	// On ecrit'Tu as 15 ans' dans chaine
	
	sprintf(chaine, "Tu as %d ans !", age);

	printf("chaine contient : %s", chaine);

	return 0;	
}
