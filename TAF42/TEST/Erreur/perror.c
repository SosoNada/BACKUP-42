#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
	FILE *file = fopen("notexist.txt", "r");
	if (file == NULL)
	{
		perror("Error opening file");
		printf("Error code: %d\n", errno);
		printf("Error message: %s\n", strerror(errno));
	}
	return 0;
}
