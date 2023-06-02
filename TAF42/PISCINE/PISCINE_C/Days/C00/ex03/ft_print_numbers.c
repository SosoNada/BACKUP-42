/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:15:41 by socherie          #+#    #+#             */
/*   Updated: 2022/08/13 22:37:32 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

/*void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

void	ft_print_numbers(void)
{
	char	nbr;

	nbr = '0';
	while (nbr <= '9')
	{
		write(1, &nbr, 1);
		nbr++;
	}
}
