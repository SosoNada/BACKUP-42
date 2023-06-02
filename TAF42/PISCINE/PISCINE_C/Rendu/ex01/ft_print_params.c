/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 21:46:23 by socherie          #+#    #+#             */
/*   Updated: 2022/08/30 22:00:28 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	p;	

	p = 1;
	while (p < argc)
	{
		i = 0;
		while (argv[p][i] != '\0')
		{
			write(1, &argv[p][i], 1);
			i++;
		}
		write(1, "\n", 1);
		p++;
	}
	return (0);
}