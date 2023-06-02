#include <stdio.h>

int main()
{
	int nbr;
	nbr = 4242;
	int *ptr = &nbr;
	printf("%ld\n", sizeof(char));
	printf("%ld\n", sizeof(char *));
	printf("%ld\n", sizeof(int));
	printf("%p\n", ptr);
	printf("%X\n", nbr);

	return 0;
}
