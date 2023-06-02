#include <stdio.h>

int Function1() {
	printf("Hello de Fonction1 !\n");
	return 1;
}

int Function2() {
	printf("Hello de Fonction2 !\n");
	return 2;
}

int main() {
	int (*functionPtr[2])(); // Tableau de pointeur de fonction

	functionPtr[0] = &Function1;
	functionPtr[1] = &Function2;

	int i = -1;
	int result = 0;
	while (++i < 2) {
		result = functionPtr[i]();
		printf("Result: [%d]\n", result);
	}

	return 0;
}
