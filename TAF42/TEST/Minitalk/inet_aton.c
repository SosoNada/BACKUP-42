#include <stdlib.h>
#include <stdio.h>
#include <arpa/inet.h>

int main() {
	struct in_addr addr;
	char ip[] = "192.168.1.1";

	if (inet_aton(ip, &addr) == 0) {
		fprintf(stderr, "Convertion failed.\n");
		exit(EXIT_FAILURE);
	}

	printf("Adresse ip = %s\n", inet_ntoa(addr));
	return 0;
}

