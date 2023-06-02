#include <stdio.h>

typedef struct {
	int mask;
	int (*hook)();
} EventFunction;

int handleClickEvent() {
	printf("Handling click event\n");
	return 1;
}

int handleKeyEvent() {
	printf("Handling key event\n");
	return 2;
}

int main() {
	EventFunction eventFunctions[2];

	eventFunctions[0].mask = 1;
	eventFunctions[0].hook = &handleClickEvent;

	eventFunctions[1].mask = 2;
	eventFunctions[1].hook = &handleKeyEvent;

	int eventMask = 1;

	int i = -1;
	while (++i < 2) {
		if (eventMask & eventFunctions[i].mask) {
			int result = eventFunctions[i].hook();
			printf("Result: [%d]\n", result);
		}
	}

	return 0;
}

