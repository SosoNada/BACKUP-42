/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 04:19:09 by socherie          #+#    #+#             */
/*   Updated: 2022/11/13 13:02:11 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;

	while (s[i])
		i++;
	while (i != 0 && *(s + i) != c)
		i--;
	if (*(s + i) == c)
		return ((char *)(s + i));
	return (0);
}
/*int main()
{
	printf("%s", ft_strrchr("sofiane", 'i'));

	return (0);
}*/
