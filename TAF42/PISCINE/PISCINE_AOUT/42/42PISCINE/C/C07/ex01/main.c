#include "../lib07.h"

int main(int ac, char **av)
{
	int min = 10, max = 14;
	int *tab = NULL;
	int size;
	int i;

	tab = ft_range(min, max);
	
	size = max - min;
	ft_putnbrarr(tab, size);
	free(tab);

	return 0;
}
