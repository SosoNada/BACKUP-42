#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

char *ft_strrev(char *str)
{
	char temp;
	int len = ft_strlen(str) - 1;
	int i = 0;

	while(i <= len / 2)
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
		i++;
	}
	return str;
}

int main(int ac, char *argv[])
{
	printf("%s", ft_strrev(argv[1]));
	return 0;
}
