#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = 0;
	unsigned int size_d = 0;

	while(dest[size_d])
		size_d++;
	while(nb && src[i] != '\0' && i < nb)
	{
		dest[size_d + i] = src[i];
		i++;
	}
	dest[size_d + i]  = '\0';
	return (dest);
}

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s", ft_strncat(argv[1], argv[2], 7));
	
	return 0;
}	
		
