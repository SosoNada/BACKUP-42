#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void handler_sigint(int signum)
{
	printf("Signal [%d] recu\n", signum);
	exit (0);
}

int main()
{
	signal(SIGINT, handler_sigint);

	printf("En attent du signal SIGINT\n");

	while (1) {}

	return 0;
}
