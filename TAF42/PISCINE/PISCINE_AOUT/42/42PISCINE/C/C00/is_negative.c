#include<unistd.h>

void is_negative(int n);

int main(int argc, char *argv[])
{
	int nb = 1;
	is_negative(nb);
	return (0);
}

void is_negative(int n)
{
	if(n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
