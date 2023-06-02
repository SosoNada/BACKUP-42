#include "../lib07.h"

int *ft_range(int min, int max)
{
	int *tab = NULL;
	int i;
	int mix;

	mix = max - min;
	if(max <= min || !(tab = malloc(sizeof(int) * mix)))
		return NULL;
	i = -1;
	while(++i < mix)
		tab[i] = min + i;
	
	return (tab);
}
