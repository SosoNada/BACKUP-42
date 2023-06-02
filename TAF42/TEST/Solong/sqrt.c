#include <math.h>
#include <stdio.h>

void erreur(int i) {
	if (i == 0)
		printf("[!] Erreur : 'NaN' entrer un nombre positif.\n");
}

int main() {
	double x = -25.0;
	double result = sqrt(x);
	if (x < 0)
		erreur(0);
	else
		printf("La racine carre dde %.f est %.f\n", x, result);

	return 0;
}

