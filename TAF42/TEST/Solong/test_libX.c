#include <stdlib.h>
#include <mlx.h>

int main() {
	void	*mlx_ptr;

	mlx_ptr = mlx_init();
	mlx_destroy_display(mlxptr);
	free(mlx_ptr);

	return 0;
}
