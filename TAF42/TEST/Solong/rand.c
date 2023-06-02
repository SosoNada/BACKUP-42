#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	time_t temps = time(NULL);
	time(&temps);
	srand(time(NULL)); // Initialisation de la graine avec l'horloge systeme
	printf("Nombre aleatoire : [%d]\n" , rand());
	printf("temp : [%ld]\n" , temps);
	return 0;

}
