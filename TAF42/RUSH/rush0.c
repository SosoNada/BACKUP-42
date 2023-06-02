/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichatte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 11:58:22 by pichatte          #+#    #+#             */
/*   Updated: 2022/08/14 16:41:04 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	toit(int pr);
void	sol(int dr);
void	mur(int side);
void	rush(int x, int y);

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
			ft_putchar('\n');
		}
	}
}

void	toit(int pr)
{
	int	a;

	a = 1;
	while (a == 1)
	{
		ft_putchar('o');
		if (pr == 1)
		{
			ft_putchar('\n');
		}
		a++;
		while (a > 1 && a < pr)
		{
			ft_putchar('-');
			a++;
		}
	}
	if (a == pr && pr != 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
}

void	mur(int side)
{
	int	i;

	i = 1;
	while (i == 1)
	{
		ft_putchar('|');
		if (side == 1)
		{
			ft_putchar('\n');
		}
		i++;
	}
	while (i < side)
	{
		ft_putchar(' ');
		i++;
	}
	if (i == side)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
}

void	sol(int dr)
{
	int	b;

	b = 1;
	if (b == 1)
	{
		ft_putchar('o');
		b++;
	}
	while (b > 1 && b < dr)
	{
		ft_putchar('-');
		b++;
	}
	if (b == dr && dr != 1)
		ft_putchar('o');
}
