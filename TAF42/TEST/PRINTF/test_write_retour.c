#include <unistd.h>
#include <stdio.h>

int main()
{
	ssize_t len;

	len = write(1, "sofiane\n", 8);
	printf("[%ld]", len);
	len += write(1, "cheriet\n", 8);
	printf("[%ld]", len);

	return 0;
}
