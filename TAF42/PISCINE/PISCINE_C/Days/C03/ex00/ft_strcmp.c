/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:09:14 by socherie          #+#    #+#             */
/*   Updated: 2022/08/23 15:17:29 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(int argc, char *argv[])
{
	if (ft_strcmp(argv[1], argv[2]) == 0)
	{	
		write(1, "Les chaines sont identiques\n", 28);
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	}
	else if (ft_strcmp(argv[1], argv[2]) > 0)
	{	
		write(1, "Caractere plus grand rencontre dans s1\n", 39);
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	}
	else
	{
		write(1, "Caractere plus petit rencontre dans s1\n", 39);
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	}
	return (0);
}*/	
