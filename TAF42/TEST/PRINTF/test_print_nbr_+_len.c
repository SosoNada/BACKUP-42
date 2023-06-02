#include <unistd.h>
#include <stdio.h>

void	ft_print_char(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_print_nbr(int nbr, int *len)
{
	long nbrl = nbr;

	if (nbrl < 0)
	{
		nbrl = - nbrl;
		ft_print_char('-', len);
	}
	if (nbrl > 9)
		ft_print_nbr(nbrl / 10, len);
	ft_print_char(nbrl % 10 + '0', len);
}

int  main()
{
	int len = 0;
	ft_print_nbr(-2147483648, &len);
	write(1, "\n", 1);
	printf("len = %d", len);
	
	return 0;
}
