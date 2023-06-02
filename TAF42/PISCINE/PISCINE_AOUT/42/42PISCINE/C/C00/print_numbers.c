#include<unistd.h>

void print_numbers(void);

int main(int argc, char *argv[])
{
	print_numbers();
	return (0);
}

void print_numbers(void)
{
	char	nb;

	nb = '0' - 1;

	while (nb++ < '9')
	{
		write(1, &nb, 1);
	}
}
