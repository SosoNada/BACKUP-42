/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:12:17 by socherie          #+#    #+#             */
/*   Updated: 2022/08/22 16:49:46 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	size--;
	while (size != 0 && src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == size)
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main(void)
{
	char dest[20];
	char src[] = "Monmousseau 94200";
	printf("taille de src = %d\nDest = %s", ft_strlcpy(dest, src, 12), dest);

	return (0);
}*/
