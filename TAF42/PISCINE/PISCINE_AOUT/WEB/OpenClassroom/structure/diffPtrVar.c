#include "Struct.h"

int main(int argc, char *argv[])
{
	Coordonnees point;
	Coordonnees *pointeur = &point;

	point.x = 10;  // Pour une variable, on utilise le "point";
	pointeur->x = 10;  // Pour un pointeur, on utilise la fleche

	return 0;
}
