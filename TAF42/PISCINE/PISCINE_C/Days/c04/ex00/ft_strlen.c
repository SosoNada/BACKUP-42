/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:02:29 by socherie          #+#    #+#             */
/*   Updated: 2022/08/30 02:36:22 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main(int argc, char *argv[])
{
	(void)argc;

	printf("Nombre de caractere dans la chaine = %d", ft_strlen(argv[1]));

	return (0);
}*/
