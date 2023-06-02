#include<unistd.h>

void ft_putchar(char c);

int main(int argc, char *argv[])
{
	ft_putchar('0');
	return 0;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
