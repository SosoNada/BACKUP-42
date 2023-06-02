#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main()
{
	int i = 1;
	signal(SIGINT, SIG_IGN);

	while(1)
	{
		printf("%d : Inside main function\n", i++);
		sleep(1);
	}
	return 0;
}
