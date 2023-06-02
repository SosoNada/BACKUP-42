/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:38:03 by socherie          #+#    #+#             */
/*   Updated: 2023/01/13 01:26:23 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	size_t	len;
	size_t	i;
	size_t	i2;

	if (!s1)
	{
		s1 = malloc(sizeof(*s1) * 1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(sizeof(*new) * len + 1);
	if (!new)
		return (NULL);
	i = -1;
	while (s1[++i])
		new[i] = s1[i];
	i2 = 0;
	while (s2[i2])
		new[i++] = s2[i2++];
	new[i] = '\0';
	free(s1);
	return (new);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (s)
		while (s[i])
			i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{	
		while (*s != '\0')
		{
			if (*s == (unsigned char)c)
				return ((char *)s);
			s++;
		}
		if (*s == (unsigned char)c)
			return ((char *)s);
	}
	return (NULL);
}
