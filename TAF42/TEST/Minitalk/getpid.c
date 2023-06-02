#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

struct message {
	long type;
	pid_t sender;
	char mtext[256];
};

int  main() {
	key_t key = ftok("file_msg.txt", 'B');
	int msgid = msgget(key, 0666 | IPC_CREAT);

	pid_t pid = getpid();
	
	struct message msg;
	msg.type = 1;
	msg.sender = pid;
	sprintf(msg.mtext, "Bonjour du processus %d !", pid);
	printf("msg.mtext = %s\n", msg.mtext);
	msgsnd(msgid, &msg, sizeof(msg), 0);

	msgrcv(msgid, &msg, sizeof(msg), pid, 0);
	printf("Processus %d a recu le message : %s\n", pid, msg.mtext);

	msgctl(msgid, IPC_RMID, NULL);

	return 0;
}
