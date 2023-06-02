#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>


void sig_handler_parent(int signum)
{
	printf("Parent : A recu un signal du  enfant\n");
}

void sig_handler_fils(int signum)
{
	printf("Enfant : A recu le signal du parent\n");
	sleep(2);
	kill(getppid(), SIGUSR1);
}

int main()
{
	pid_t pid;
	pid = fork();
	printf("pid = [%d]\n", pid);
	if (pid < 0)
	{
		printf("Fork failed\n");
		exit(1);
	}
	else if (pid == 0)
	{
		signal(SIGUSR1, sig_handler_fils);
		printf("Enfant : attend le signal\n");
		pause();

	}
	else
	{
		signal(SIGUSR1, sig_handler_parent);
		sleep(2);
		printf("Parent : envoie du signal au enfant\n");
		kill(pid, SIGUSR1);
		printf("Parent : en attente de reponse\n");
		pause();
	}
	return 0;
}
