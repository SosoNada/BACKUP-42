#include <unistd.h>
#include <stdlib.h>

int main() 
{
	if ((write(1, "Bonjour\n", 9)) != 8)
		write(2, "Erreur sur le descripteur 1\n",28);
	exit(0);
}
