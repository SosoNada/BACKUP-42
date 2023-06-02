#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return (i);
}

int main(int argc, char *argv[])
{
	printf("Longueur de la chaine : %d\n", ft_strlen(argv[1]));
	return 0;
}
