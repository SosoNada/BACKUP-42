#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd3 = open("test2.txt", O_RDONLY);
	int fd2 = open("test.txt", O_RDONLY);
	int fd4 = open("tesst.txt", O_RDONLY);
	int fd5 = open("test.txt", O_RDONLY);
	//int fd6 = open("test.txt", O_RDONLY);

	printf("valeur de retour de fd3 = [%d]\n", fd3);
	printf("valeur de retour de fd2 = [%d]\n", fd2);
	printf("valeur de retour de fd2 = [%d]\n", fd2);
	printf("valeur de retour de fd2 = [%d]\n", fd2);
	printf("valeur de retour de fd4 = [%d]\n", fd4);
	printf("valeur de retour de fd5 = [%d]\n", fd5);

	return 0;
}
