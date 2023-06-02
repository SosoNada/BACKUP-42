#include "lib.h"

int gagne(int *lettreTrouvee, int nombreLettre)
{
	int joueurGagne = 1;

	for(int i = 0; i < nombreLettre; i++)
	{
		if(lettreTrouvee[i] == 0)
			joueurGagne = 0;
	}
	return joueurGagne;
}
