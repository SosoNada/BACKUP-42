/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 00:07:06 by socherie          #+#    #+#             */
/*   Updated: 2023/01/12 22:08:08 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_save_line(char *save)
{
	int		i;
	int		i2;
	char	*str;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	i++;
	str = malloc(sizeof(*str) * (ft_strlen(save) - i + 1));
	if (!str)
		return (NULL);
	//i++;
	i2 = 0;
	while (save[i] != '\0')
		str[i2++] = save[i++];
	str[i2] = '\0';
	free(save);
	return (str);
}
