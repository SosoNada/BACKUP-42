#include "../H/lireDouble.h"

int main(int ac, char **av)
{
	double poid = 0;

	printf("Combien pesez-vous ? ");
	poid = lireDouble();

	printf("Ah ! Vous pesez donc %lf\n", poid);

	return 0;
}

