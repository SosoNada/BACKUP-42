#include "lib07.h"

char *ft_strdup(char *str)
{
	int i = 0;
	char *dest = NULL;

	while(str[i])
		i++;

	if(!(dest = malloc((i + 1) * sizeof(char))))
	{
		return NULL;
	}

	i = -1;
	while(str[++i])
		dest[i] = str[i];
	dest[i] = '\0';
	return dest;
}
