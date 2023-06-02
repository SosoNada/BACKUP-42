#include <stdio.h>
#include <stdlib.h>
#include "Struc.h"

void initialiserCoordonnees(Coordonnees *point);

int main(int argc, char*argv[])
{
	Coordonnees point;
	initialiserCoordonnees(&point);
	printf("Point x : %d\nPoint y : %d\n", point.x, point.y);
	return 0;
}

void initialiserCoordonnees(Coordonnees *point)
{
	(*point).x = 10;
	point->y = 20;
}
