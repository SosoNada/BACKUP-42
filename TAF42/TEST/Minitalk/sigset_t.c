#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

int  main()
{
	sigset_t myset;
	
	/*if(sigemptyset(&myset) == -1)
	{
		perror("sigemptyset");
		exit(EXIT_FAILURE);
	}*/

	if(sigaddset(&myset, SIGINT) == -1)
	{
		perror("sigaddset");
		exit(EXIT_FAILURE);
	}

	if(sigismember(&myset, SIGTERM))
		printf("Le signal SIGTERM est membre du masque de siganaux.\n");
	else
		printf("Le signal SIGTERM n'est pas membre du masque de signaux.\n");
	
	return 0;
}
