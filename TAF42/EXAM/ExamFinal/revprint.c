#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i] != '\0')
		i++;
	return i;
}

char *ft_rev_print(char *str)
{
	int len = ft_strlen(str) -1;
	while(len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	printf("%s", ft_rev_print(argv[1]));

	return 0;
}
	
