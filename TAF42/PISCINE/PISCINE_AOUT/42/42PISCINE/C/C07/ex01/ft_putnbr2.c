#include <unistd.h>

void ft_putnbr2(int nbr)
{
	long long nb;
	nb = nbr;
	if(nb < 0)
	{	
		nb = -nb;
		write(1, "-", 1);
	}
	if(nb > 9)
		ft_putnbr2(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

/*int main(int argc, char *argv[])
{
	ft_putnbr2(-2147483648);
	return 0;
}*/
