#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("char : %lu octets\nint : %lu octets\nlong : %lu octets\ndouble : %lu octets"\
			, sizeof(char), sizeof(int), sizeof(long), sizeof(double));

	return 0;
}
