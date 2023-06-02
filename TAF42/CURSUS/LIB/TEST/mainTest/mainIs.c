#include <stdio.h>
#include "../LIBFT/libft.h"

int main()
{
	void *ptr;

	ptr = ft_calloc(18446744073709551615UL, 18446744073709551615UL);
	(void)ptr;
	return 0;
}
