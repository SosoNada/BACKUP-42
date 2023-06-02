#include <stdio.h>

typedef struct {
	int x;
	int y;
	int width;
	int height;
	char color[20];
}	t_rect;

int	render_rect(t_rect rect)
{
	printf("Rec: x = [%d], y = [%d], width = [%d], height = [%d], color = [%s]\n", rect.x, rect.y, rect.width, rect.height, rect.color);
}

int main() {
	render_rect((t_rect){800, 600, 100, 100, "RED_PIXEL"});

	return 0;
}
