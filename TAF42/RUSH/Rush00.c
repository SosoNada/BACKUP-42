/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 06:21:44 by socherie          #+#    #+#             */
/*   Updated: 2022/08/14 13:26:12 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	toit(int pr);
void	sol(int dr);
void	mur(int side);
void	rush(int x, int y);

int	main(void)
{
	rush(123, 42);
}

void	rush(int x, int y)
{
	int	k;		

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else
	{
		k = 1;
		while (k == 1)
		{
			toit(x);
			k++;
		}
		while (k < y)
		{
			mur (x);
			k++;
		}
		if (k == y)
		{
			sol(x);
			write(1, "\n", 1);
		}
	}
}

void	toit(int pr)
{
	int	a;

	a = 1;
	while (a == 1)
	{
		write(1, "o", 1);
		a++;
	}
	while (a > 1 && a < pr)
	{
		write(1, "-", 1);
		a++;
	}
	if (a == pr && pr != 1)
		write(1, "o", 1);
	write(1, "\n", 1);
}

void	mur(int side)
{
	int	i;

	i = 1;
	while (i == 1)
	{
		write(1, "|", 1);
		if (side == 1)
		{
			write(1, "\n", 1);
		}
		i++;
		while (i < side)
		{
			write(1, " ", 1);
			i++;
		}
		if (i == side)
		{
			write(1, "|", 1);
			write(1, "\n", 1);
		}
	}
}

void	sol(int dr)
{
	int	b;

	b = 1;
	if (b == 1)
	{
		write(1, "o", 1);
		b++;
	}
	while (b > 1 && b < dr)
	{
		write(1, "-", 1);
		b++;
	}
	if (b == dr && dr != 1)
		write(1, "o", 1);
}
