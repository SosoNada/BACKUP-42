#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	long i = 0;

	if(ac > 1)
		printf("%ld\n", (i = strtol(av[1],\
				NULL, 10)));

	i = strtol("148", NULL, 10);
	printf("%ld\n", i);

	i = strtol("148.215", NULL, 10);
	printf("%ld\n", i);

	i = strtol("     148.215", NULL, 10);
	printf("%ld\n", i);
	
	i = strtol("     148+34", NULL, 10);
	printf("%ld\n", i);
	
	i = strtol("     148 feuilles mortes", NULL, 10);
	printf("%ld\n", i);
	
	i = strtol("     Il y a 148 feuiiles mortes"\
			, NULL, 10);
	printf("%ld\n", i);
	

	return 0;
}
