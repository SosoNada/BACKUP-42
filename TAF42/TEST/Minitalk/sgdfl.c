#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signum)
{
	printf("Inside handler function\n");
	signal(SIGINT, SIG_DFL);
}

int main()
{
	signal(SIGINT, sig_handler);
	while (1)
	{
		printf("Hello world!\n");
		sleep(1);
	}
	return 0;
}
