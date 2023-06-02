#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(int argc, char *argv[])
{
	int tab[8] = {8, 114, 20, -2, 1, 60, 43, 12};

	ft_sort_int_tab(tab, 8);

	printf("%d, %d, %d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5] ,tab[6], tab[7]);

	return 0;
	
}

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int temp;
	i = 0;		

	while (i < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else 
			i++;
	}
}
