#include <stdio.h>
#include <unistd.h>

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	main(int argc, char *argv[])
{
	(void)argc;
	printf("argument 1 = %s\n", argv[1]);

	return (0);
}
	
