/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:11:00 by socherie          #+#    #+#             */
/*   Updated: 2023/01/12 22:13:07 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_get_line(char *save)
{
	int		i;
	int		i2;
	char	*str;

	i = 0;
	if (!save) //util ou non
		return (NULL);
	while (save[i] != '\0' && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		i++;
	str = malloc(sizeof(*str) * i + 1);
	if (!str)
		return (NULL);
	i2 = 0;
	while (i2 < i)
	{
		str[i2] = save[i2];
		i2++;
	}
	str[i2] = '\0';
	return (str);
}
