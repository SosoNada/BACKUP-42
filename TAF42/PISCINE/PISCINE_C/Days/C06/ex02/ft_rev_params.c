/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 04:37:14 by socherie          #+#    #+#             */
/*   Updated: 2022/08/31 21:37:01 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	ac;

	ac = argc - 1;
	while (ac > 0)
	{
		i = 0;
		while (argv[ac][i] != '\0')
		{
			write(1, &argv[ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
