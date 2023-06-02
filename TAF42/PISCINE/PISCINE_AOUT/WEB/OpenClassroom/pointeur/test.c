#include <stdio.h>

int main()
{
	int variable = 42;
	int *ptr = &variable;

	printf("%p\n%p", &variable, ptr);

	return 0;
}
