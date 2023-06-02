#include<unistd.h>
#include<stdio.h>

void	combn(int n);


int main(int argc, char *argv[])
{
	int nbr = 2;
	combn(nbr);
}

void	combn(int n)
{
	char	tab[11];
	int i;

	if (n < 1 || n > 9)
		return;

	*tab = '0';
	i = 0;

	while (++i < n)
	{
		tab[i] = tab[i - 1] + 1;
	}

	tab[n] = ',';
	tab[n + 1] = ' ';

	while (*tab <=':' - n) // Ou 58 
	{
		if (*tab != 58 -n)
		{
		       	write(1, tab, n + 2);
		}
		else 
		{
			write(1, tab, n);
		}
	        	
		while (i--)	
		{	 
			if (++tab[i] <= 58 - n + i)
				break;	
		}
		 
		while (++i > 0 && i < n) 
		{	 
			tab[i] = tab[i - 1] + 1;
		}
	}
}

