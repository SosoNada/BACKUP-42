/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:06:35 by socherie          #+#    #+#             */
/*   Updated: 2022/12/04 10:14:30 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_itoa(int n)
{
	char *str;
	str = NULL;

	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	str = malloc(sizeof(*str) * 2);
	if (!str)
		return (ft_strdup(""));
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa( n % 10));
	else if (n >= 0 && n <= 9)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	return (str);
}
/*
int main()
{
	char *s = ft_itoa(2147483647);

	printf("%s\n", s);
	return 0;
}*/
