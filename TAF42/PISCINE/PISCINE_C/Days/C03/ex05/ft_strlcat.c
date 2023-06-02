/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 00:05:42 by socherie          #+#    #+#             */
/*   Updated: 2022/08/29 17:31:31 by socherie         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_d;
	unsigned int	len_s;

	i = 0;
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size <= len_d || size == 0)
	{
		return (len_s + size);
	}
	while (src[i] != '\0' && i + len_d < size - 1)
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}

/*int main(int argc, char *argv[])
{
	if (argc > 1)
	{

		printf("Les arguments contiennent : %s %s %s\n", \
		argv[1], argv[2], argv[3]);
		
		printf("Longeur total de la chaine dest = %d\n", \
		ft_strlcat(argv[1], argv[2], 10));

		printf("La chaine dest contient : %s\n", \
		argv[1]);

	}
	return (0);
}*/
