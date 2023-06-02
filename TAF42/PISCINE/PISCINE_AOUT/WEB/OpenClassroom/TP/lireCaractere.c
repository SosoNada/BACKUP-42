#include "lib.h"

char lireCaractere()
{
	char caractere = 0;

	caractere = getchar();
	caractere = toupper(caractere);

	while(getchar() != '\n');

	return caractere;
}
