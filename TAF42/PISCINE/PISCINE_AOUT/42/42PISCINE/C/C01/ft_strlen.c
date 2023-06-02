#include <stdio.h>

int ft_strlen(char *str);

int main(int argc, char *argv[])
{
	int len;

	char str[] = "16 rue gaston monmousseau 94200 ivry sur seine";
	
	len = ft_strlen(str);

	printf("%s\n", str);
	printf("%d caracteres.\n", len);

	return 0;
}

int ft_strlen(char *str)
{
	int i = 0;

	if (*str != '\0')
	{
		while (str[i] != '\0')
		{
			i++;
		}
	}
	return i;
}
