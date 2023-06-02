#include <stdio.h>
#include "Struc.h"

int main(int argc, char *argv[])
{
	Coordonnees point = {20,40};

	printf("x vaut %d\ny vaut %d\n", \
			point.x, point.y);

	return 0;
}
