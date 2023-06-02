/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 20:47:07 by socherie          #+#    #+#             */
/*   Updated: 2022/08/13 21:06:18 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

/*void    ft_print_alphabet(void);

int main(void)
{
	ft_print_alphabet();
	return(0);
}*/

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a <= 'z')
	{
		write(1, &a, 1);
		a++;
	}
}
