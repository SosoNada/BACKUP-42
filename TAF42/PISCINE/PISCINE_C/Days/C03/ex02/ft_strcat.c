/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 16:35:09 by socherie          #+#    #+#             */
/*   Updated: 2022/08/25 12:18:19 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size_d;

	i = 0;
	size_d = 0;
	while (dest[size_d] != '\0')
		size_d++;
	while (src[i] != '\0')
	{
		dest[size_d] = src[i];
		size_d++;
		i++;
	}
	dest[size_d] = '\0';
	return (dest);
}

/*int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s", ft_strcat(argv[1], argv[2]));
	}
	
	return (0);
}*/
