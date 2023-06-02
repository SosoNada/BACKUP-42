#include <stdio.h>

int main(int argc, char *argv[])
{
	char prenom[100];

	printf("Comment t'appelle-tu ?\n");
	scanf("%s", prenom);
	printf("Salut %s, je suis heureux de te rencontrer !", prenom);

	return 0;
}
