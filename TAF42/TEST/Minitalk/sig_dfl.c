#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sig_handler(int signum)
{
	printf("\nInside handler function\n");
	signal(SIGINT, SIG_DFL);
}

int main()
{
	int i = 1;
	signal(SIGINT, sig_handler);

	while(1)
	{
		printf("%d : Inside main function\n", i++);
		sleep(1);
	}
	return 0;
}

