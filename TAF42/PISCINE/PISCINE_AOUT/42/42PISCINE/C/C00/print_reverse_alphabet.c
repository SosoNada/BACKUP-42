#include<unistd.h>

void print_reverse_alphabet(void);

int main(int argc,char *argv[])
{
	print_reverse_alphabet();
	return (0);
}

void	print_reverse_alphabet(void)
{
	char	c;

	c = 'z' + 1;

	while (c-- > 'a')
	{
		write(1, &c, 1);
	}
}

