#include <stdio.h>

int add(int a, int b) {
	return (a + b);
}

int subtract(int a, int b) {
	return (a - b);
}

int main() {
	int (*functionPtr[2])(int a, int b);

	functionPtr[0] = &add;
	functionPtr[1] = &subtract;

	int result = functionPtr[0](4, 2);
	printf("Result: %d\n", result);

	result = functionPtr[1](4, 2);
	printf("Result: %d\n", result);

	return 0;
}
