#include<stdio.h> 

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(int argc, char *argv[])
{
	char dest[100];
	char src[] = "Sofiane Cheriet";
	ft_strncpy(dest, src, 14);
	printf("%s", dest);

	return 0;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	
	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
