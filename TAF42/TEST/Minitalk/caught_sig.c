#include <stdio.h>
#include <signal.h>

void handler_sigint(int signum)
{
	printf("Caught signal [%d]\n", signum);
}

int main()
{
	signal(SIGINT, handler_sigint);
	while(1);
	return 0;
}
