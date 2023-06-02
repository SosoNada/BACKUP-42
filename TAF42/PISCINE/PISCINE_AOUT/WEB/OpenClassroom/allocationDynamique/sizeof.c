#include <stdio.h>
#include <stdlib.h>

struct Coordonnees
{
	int x;
	int y;
} Coordonnees;

int main(int argc, char *argv[])
{
	printf("Coordonnees : %lu octets\n", sizeof(Coordonnees));

	return 0;
}
