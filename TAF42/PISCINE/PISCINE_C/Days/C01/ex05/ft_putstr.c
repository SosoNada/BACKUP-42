/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:40:06 by socherie          #+#    #+#             */
/*   Updated: 2022/08/16 17:54:02 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "monmousseau\n";
	ft_putstr(str);
	return (0);
}*/

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		while (*str != '\0')
		{
			write(1, str++, 1);
		}
	}
}	
