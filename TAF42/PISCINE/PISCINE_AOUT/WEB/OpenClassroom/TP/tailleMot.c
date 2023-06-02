#include "lib.h"

int tailleMot(char *motSecret)
{
/******	int nombreLettre = 0;
*******	for(int i = 0; motSecret[i] != '\0'; i++)
*******		nombreLettre++;
*******	return nombreLettre; */ 

	int i = 0;
	while(motSecret[i])
		i++;
	return i; 
}

