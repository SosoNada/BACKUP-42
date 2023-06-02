#include <unistd.h>
#include <stdio.h>


int ft_atoi(char *str)
{
	int i = 0;
	int nbr = 0;
	int minus = 1;

	while((str[i] >= '\t' && str[i] <= '\r') || (str[i] == ' '))
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i++] == '-')
			minus = -minus;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i++] - '0');
	}
	return (minus * nbr);
}

int main(int argc, char *argv[])
{
	printf("Chaine de \"char\"\nconvertit en \"int\" : %d\n", ft_atoi(argv[1]));
	return 0;
}
