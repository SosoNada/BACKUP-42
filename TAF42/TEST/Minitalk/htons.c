#include <stdio.h>
#include <arpa/inet.h>

int main() {
	uint16_t myshort = 0x1234;
	printf("Valeur initiale : %04x\n", myshort);
	uint16_t network_short = htons(myshort);
	printf("Valeur convertie en reseau  : %04x\n", network_short);
	return 0;
}

