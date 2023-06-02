#include <stdio.h>
#include "../LIBFT/libft.h"

int main(int ac, char **av)
{
	(void)ac;
        char dest[20];
        printf("taille de src = %ld\nDest = %s", ft_strlcpy(dest, av[1], 2), dest);

        return (0);
}

