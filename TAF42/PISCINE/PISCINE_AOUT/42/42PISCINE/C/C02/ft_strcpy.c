#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(int argc, char *argv[])
{
	char dest[100] = "0";
	char src[] = "Sofiane Cheriet";

	ft_strcpy(dest, src);
	
	printf("%s", dest);

	return 0;
}

char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	
	if (*dest != '\0')
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';

	}
	return (dest);
}
