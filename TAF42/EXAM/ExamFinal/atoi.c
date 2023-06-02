#include <stdio.h>

int ft_atoi(const char *str)
{
	int i = 0;
	int minus = 1;
	int nbr = 0;

	while(str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
		i++;
	if(str[i] == '-')
	{
		minus = -minus;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <='9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (minus * nbr);
}
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d", ft_atoi(argv[1]));
	}
}
