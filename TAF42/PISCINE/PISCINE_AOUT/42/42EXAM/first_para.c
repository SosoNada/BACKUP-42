#include <unistd.h>

void put_str(char *str)
{
	while(*str)
		write(1, str++, 1);
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{	
		write(1, "\n", 1);
		return 1;
	}
	put_str(argv[1]);
	write(1, "\n", 1);
	return 0;
}
