#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signum) 
{
	printf("\n Fonction de gestionnaire interne\n");
}

int main() 
{
	int i = 1;
	signal(SIGINT, sig_handler);
	while(1) {
		printf("%d : inside main function\n", i++);
		sleep(1);
	}
	return 0;
}


