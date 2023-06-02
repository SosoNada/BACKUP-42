#include "lib07.h"

int main(int ac, char **av)
{
	char *dup;

	if(ac > 1)
	{
		dup = ft_strdup(av[1]);
		printf("%s\n", dup);
		free(dup);
	}
	return 0;
}
			
