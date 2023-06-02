#include "../lib07.h"

void ft_putnbrarr(int *num, int l)
{
	while(l-- > 0)
	{
		ft_putnbr2(*num++);
		ft_putchar(' ');
	}
}

