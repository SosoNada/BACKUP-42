#include<unistd.h>

void	ft_print_alphabet(void);

int main(int argc, char *argv[])
{
	ft_print_alphabet();

	return (0);
}

void	ft_print_alphabet(void)
{
	char	c;
	c = 'a' - 1;

	while (c++ < 'z')
	{
		write (1, &c, 1);
	}
}
	

