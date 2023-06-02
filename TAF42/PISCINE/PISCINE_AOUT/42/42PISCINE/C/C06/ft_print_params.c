#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int p = 0;

	while(argc > ++p)
	{
		i = -1;
		while(argv[p][++i])
			write(1, &argv[p][i], 1);
		write(1, "\n", 1);
	}
	return 0;
}
