#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

int main()
{
	sigset_t set;
	int sig;

	if(sigemptyset(&set) == -1)
	{
		perror("sigemptyset");
		exit(EXIT_FAILURE);
	}

	if(sigaddset(&set, SIGINT) == -1)
	{
		perror("sigaddset");
		exit(EXIT_FAILURE);
	}

	if(sigwait(&set, &sig) == -1)
	{
		perror("sigwait");
		exit(EXIT_FAILURE);
	}

	printf("Signal reçu : %d\n", sig);

	return 0;
}
