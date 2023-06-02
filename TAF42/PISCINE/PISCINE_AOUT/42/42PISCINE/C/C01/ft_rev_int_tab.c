#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(int argc, char *argv[])
{
	int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	int i = 0;

	ft_rev_int_tab(tab, 10);

	while (i < 10)
	{
		printf("tab[%d] vaut : %d\n", i, tab[i]);
		i++;
	}
}	
void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;

	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size -i - 1];
		tab[size -i - 1] = temp;
		i++;
	}
}
