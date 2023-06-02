#include "../H/lireLong.h"

int main(int ac, char **av)
{
	long age = 0;

	printf("Quel est votre age ? ");
	age = lireLong();

	printf("Ah ! Vous avez donc %ld\n", age);

	return 0;
}
