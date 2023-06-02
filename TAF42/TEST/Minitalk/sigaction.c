#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MSG_SIZE 128

struct message {
	long type;
	char text[MSG_SIZE];
};

void handler(int signum) {
	printf("Signal %d recu\n", signum);
	exit(EXIT_SUCCESS);
}

int main() {
	key_t key;
	int msgid;
	struct message msg;

	key = ftok(".", 'm');
	if (key == -1) {
		perror("Erreur lors de la creation de la cle");
		exit(EXIT_FAILURE);
	}

	msgid = msgget(key, IPC_CREAT | 0666);
	if (msgid == -1){
		perror("Erreur lors de la creation de la file de mesage");
		exit(EXIT_FAILURE);
	}

	struct sigaction newact, oldact;
	newact.sa_handler = handler;
	sigemptyset(&newact.sa_mask);
	newact.sa_flags = 0;
	sigaction(SIGINT, &newact, NULL);

	while (1) {
		if (msgrcv(msgid, &msg, MSG_SIZE, 0, 0) == -1) {
			perror("Erreur lors de la reception du message");
			exit(EXIT_FAILURE);
		}

		printf("Message recu : %s\n", msg.text);
	}

	return 0;
}
