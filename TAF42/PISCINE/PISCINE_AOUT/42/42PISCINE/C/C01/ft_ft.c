#include <stdio.h>

void ft_ft(int *nbr);

int main(int argc, char *argv[])
{
	int nbr = 0;

	ft_ft(&nbr);

	printf("%d", nbr);

	return 0;
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
