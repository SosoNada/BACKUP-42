#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	pid_t pid;

	if ((pid = fork()) == 0){
		printf("Processus fils en cours d'execution.\n");
		pause();
		printf("Processus fils a recu un signal.\n");
	} else {
		printf("PID = %d\n", pid);
		printf("Processus parent en cours d'execution.\n");
		kill(-1, SIGUSR1);
		wait(NULL);
		printf("Processus fils termine.\n");
	}

	return 0;
}
