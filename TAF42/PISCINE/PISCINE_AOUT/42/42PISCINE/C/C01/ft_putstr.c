#include <unistd.h>

void ft_putstr(char *str);

int main(int argc, char *argv[])
{
	char str[] = "Hello Friend !\n";

	ft_putstr(str);
}

void ft_putstr(char *str)
{
	int i;
	
	i = 0;

	if (*str != '\0')
	{
		while (str[i] != '\0')
		{
			write(1, &str[i++], 1);
		}
	}
}

/* void put_str2(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			write(1, str++, 1);
		}
	}
}*/
