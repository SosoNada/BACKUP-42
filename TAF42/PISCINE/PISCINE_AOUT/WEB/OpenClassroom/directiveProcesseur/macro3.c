#include <stdio.h>

#define MAJEUR(age, nom) if(age >= 18) \
	printf("Vous etes majeur %s\n", nom); \
	else \
	printf("Vous ete mineur %s\n", nom);

int main()
{
	MAJEUR(15, "Nada")
	
	return 0;
}
