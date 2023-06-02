#include <unistd.h>

int ft_check_base(char *base)
{
	int i = -1;
	int b;

	if(!base || !*(base + 1))
		return 0;

	while(base[++i])
	{
		if(base[i] <= 32 || base[i] > 126 \
		|| base[i] == '-' || base[i] == '+')
			return 0;

		b = i;
		while(base[++b])
		{
			if(base[b] == base[i])
				return 0;
		}
	}
	return i;
}
void ft_putnbr_base(int nbr, char *base)
{
	long long int nb;
	
	int base_len;

	nb = nbr;

	if ((base_len = ft_check_base(base)))
	{
		if(nb < 0)
        	{
                	nb = -nb;
                	write(1, "-", 1);
        	}
        	if(nb >= base_len)
                	ft_putnbr_base(nb / base_len, base);
        	write(1, &base[nb % base_len], 1);
	}
}

int main(int argc, char *argv[])
{
	ft_putnbr_base(420, argv[1]);
	return 0;
}
