#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	while(*str)
	{
		if(*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

int main(int ac, char *av[])
{
	printf("%d\n", ft_str_is_numeric(av[1]));
	printf("%d\n", ft_str_is_numeric(av[2]));
	return 0;
}


