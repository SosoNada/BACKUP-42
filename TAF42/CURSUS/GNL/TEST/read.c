#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	int	fd;
	char	buf[1024];
	int	n;

	fd = open("test2.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return 1;
	}

	n = read(fd, buf, sizeof(buf));
	if (n == -1)
	{
		perror("read");
		return 1;
	}

	printf("%.*s", (int)n, buf);

	close(fd);

	return 0;
}
