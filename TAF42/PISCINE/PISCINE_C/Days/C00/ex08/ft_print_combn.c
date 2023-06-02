/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 00:06:52 by socherie          #+#    #+#             */
/*   Updated: 2022/08/16 00:12:49 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char *tab, int i, int n)
{
	while (*tab <= 58 - n)
	{
		if (*tab != 58 - n)
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
				break ;
		}
		while (++i > 0 && i < n)
		{
			tab[i] = tab[i - 1] + 1;
		}
	}
}

void	ft_print_combn(int n)
{
	char	tab[11];
	int		i;

	if (n < 1 || n > 9)
		return ;
	*tab = '0';
	i = 0;
	while (++i < n)
	{
		tab[i] = tab[i - 1] + 1;
	}
	tab[n] = ',';
	tab[n + 1] = ' ';
	printer(tab, n, i);
}
