#include <unistd.h>
#include <stdio.h>


int check_base(char *base)
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
	return (i);
}

int check_str(char str, char *base)
{
	int i = -1;

	while(base[++i])
	{
		if(base[i] == str)
			return (i);
	}
	return (-1);
}

int ft_atoi_base(char *str, char *base)
{
	int i = 0;
	int nbr = 0;
	int minus = 1;
	int base_len;

	if((base_len = check_base(base)))
	{
		while((str[i] >= '\t' && str[i] <= '\r') \
		|| (str[i] == ' '))
			i++;
        	while(str[i] == '+' || str[i] == '-')
        	{
                	if(str[i++] == '-')
                        	minus = -minus;
        	}
        	while(check_str(str[i], base) != -1)
        	{
                	nbr = nbr * base_len + check_str(str[i++], base);
        	}
        	return (minus * nbr);
	}
	return 0;
}

int main(int argc, char *argv[])
{
	printf("base \"char\" convertit en base \"int\" : %d", ft_atoi_base(argv[1], argv[2]));

	return 0;
}
