#include <math.h>
#include <stdio.h>

int main() {
	printf("Arrondi de 0.5 est : [%1.f]\n", round(0.5));
	printf("Arrondi de 0.3 est : [%1.f]\n", round(0.3));
	printf("Arrondi de 0.7 est : [%1.f]\n\n", round(0.7));

	printf("Plafond (ceil) de 2.1 est : [%1.f]\n", ceil(2.1));
	printf("Plancher (floor) de 2.9 est : [%1.f]\n", floor(2.9));

	return 0;
}
