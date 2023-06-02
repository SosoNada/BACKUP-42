#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(int argc, char *argv[])
{
	int a = 10;
	int b = 3;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("%d\n%d\n%d\n%d\n", a, b, div, mod);
}
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
