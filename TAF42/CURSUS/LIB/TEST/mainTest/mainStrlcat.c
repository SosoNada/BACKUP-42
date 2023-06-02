#include <stdio.h>
#include "../LIBFT/libft.h"

int main(int argc, char *argv[])
{
        if (argc > 1)
        {
                char dest[20] = "monmousseau";

                printf("Les arguments contiennent : %s %s\n", \
                argv[1], argv[2]);

                printf("Longeur total de la chaine dest = %ld\n", \
                ft_strlcat(dest, argv[1], 20));

                printf("La chaine dest contient : %s\n", \
		dest);
                

        }
        return (0);
}
