#include <unistd.h>

void printNumber(void)
{
	char c = '0' -1;

	while(c++ < '9')
		write(1, &c, 1);
}

int main(int ac, char **av)
{
	printNumber();
	return 0;
}
