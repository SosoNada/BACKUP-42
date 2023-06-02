#include <stdlib.h>
#include <mlx.h>

int main() {
	void	*mlx_ptr;
	void	*mlx_window;
	mlx_ptr = mlx_init();
	mlx_window = mlx_new_window(mlx_ptr, 500, 500, "Hello");
	mlx_loop(mlx_ptr);
//	mlx_destroy_display(mlx_ptr);
//	free(mlx_ptr);

	return 0;
}
