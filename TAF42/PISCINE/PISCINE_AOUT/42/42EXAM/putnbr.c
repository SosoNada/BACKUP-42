#include <unistd.h>

void ft_putnbr(int nbr)
{
	long long int nb;

	nb = nbr;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}
