#include <stdio.h>

void ft_swap(int *a, int *b);

int main(int argc, char *argv[])
{
	int a = 21;
	int b = 42;

	ft_swap(&a, &b);	

	printf("%d\n%d\n", a, b);

	return 0;
}
void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
