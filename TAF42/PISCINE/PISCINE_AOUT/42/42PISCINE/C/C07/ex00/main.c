#include "lib07.h"

int main(int ac, char **av)
{
	char *str;
	char *allocation;

	str = "Hello World with malloc()";
	printf("original : base : $%s$ @ %p\n", str, str);

	allocation = strdup(str);
	printf("copied : alloc : $%s$ @ %p\n", allocation, allocation);

	allocation = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocation, allocation);

	free(allocation);

	return 0;
}
