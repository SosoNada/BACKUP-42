#include <stdio.h>

#define LARGEUR_FENETRE 800
#define HAUTEUR_FENETRE 600
#define NOMBRE_PIXELS   (LARGEUR_FENETRE * HAUTEUR_FENETRE)

int main(int ac, char **av)
{
	printf("%d", NOMBRE_PIXELS);
	return 0;
}
