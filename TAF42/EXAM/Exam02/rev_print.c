#include <unistd.h>

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str) -1;
	
	while (i >= 0)
	{
		write (1, &str[i] ,1);
		i--;
	}
	return (str + write(1, "\n", 1));
}

int	main(void)
{
	char str [] = "";

	ft_rev_print(str);
	return (0);
}
