#include <stdio.h>
#include <stdarg.h>

void	print_arg(char *first, ...);

int main()
{

	
	int first = 0;
	print_arg("first", "sofiane", "cheriet", "ivry", "94200", "monmousseau", 0);
	printf("%d", first);
	return 0;
}

void	print_arg(char *first, ...)
{
	va_list ap;
	char *arg;

	va_start(ap, first);

	arg = va_arg(ap, char *);

	while (arg)
	{
		printf("%s\n", arg);
		arg = va_arg(ap, char *);
	}
	va_end(ap);
}

