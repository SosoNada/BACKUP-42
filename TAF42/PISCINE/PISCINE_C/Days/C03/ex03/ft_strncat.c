/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:49:48 by socherie          #+#    #+#             */
/*   Updated: 2022/08/24 14:05:40 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size_d;

	i = 0;
	size_d = 0;
	while (dest[size_d] != '\0')
	{
		size_d++;
	}
	while (nb && src[i] != '\0' && i < nb)
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
                printf("%s", ft_strncat(argv[1], argv[2], 7));
        }
        
        return (0);
}*/
