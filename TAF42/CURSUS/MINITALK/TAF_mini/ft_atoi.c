/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:55:41 by socherie          #+#    #+#             */
/*   Updated: 2022/12/01 12:03:58 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	minus;

	i = 0;
	nbr = 0;
	minus = 1;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i++] == '-')
			minus = -minus;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nbr = nbr * 10 + (nptr[i++] - '0');
	return (minus * nbr);
}
/*
int main()
{
	printf("%d\n", ft_atoi("+-54"));
	printf("%d\n", atoi("+-54"));
	return (0);
}*/
