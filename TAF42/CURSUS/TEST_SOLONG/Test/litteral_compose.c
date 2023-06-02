#include <stdio.h>

typedef struct {
	int width;
	int height;
} t_rect;

int main() {
	t_rect rect = { .width = 10, .height = 20 };

	printf("Largeur = [%d]\nHauteur = [%d]\n", rect.width, rect.height);

	return 0;
}
