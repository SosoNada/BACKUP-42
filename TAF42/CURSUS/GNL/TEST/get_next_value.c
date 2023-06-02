#include <stdio.h>

int	get_next_value()
{
	static int current_value = 0;
	return current_value += 1;
}

int main()
{
	printf("appel GNV = [%d]\n", get_next_value());
	printf("appel GNV = [%d]\n", get_next_value());
	printf("appel GNV = [%d]\n", get_next_value());
	printf("appel GNV = [%d]\n", get_next_value());	
	
	return 0;
}
