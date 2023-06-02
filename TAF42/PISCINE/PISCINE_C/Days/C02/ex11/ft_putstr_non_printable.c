/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:08:37 by socherie          #+#    #+#             */
/*   Updated: 2022/08/30 02:48:13 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_char_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_printable(str[i]) == 1)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(unsigned char)str[i] / 16]);
			ft_putchar("0123456789abcdef"[(unsigned char)str[i] % 16]);
		}
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\vn");
	ft_putchar('\n');
	ft_putstr_non_printable("\x0");
	ft_putchar('\n');
	ft_putstr_non_printable("");
	return (0);
}*/
