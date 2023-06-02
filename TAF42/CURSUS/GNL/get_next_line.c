/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 15:50:34 by socherie          #+#    #+#             */
/*   Updated: 2023/01/13 17:48:45 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save = ft_read_line(fd, save);
	if (!save)
		return (NULL);
	line = ft_get_line(save);
	save = ft_save_line(save);
	return (line);
}

char	*ft_read_line(int fd, char *save)
{
	char	*buffer;
	int		bytes;

	buffer = malloc(sizeof(*buffer) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(save, '\n') && bytes != 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == 0)
			break ;
		if (bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		save = ft_strjoin(save, buffer);
	}
	free (buffer);
	return (save);
}

char	*ft_get_line(char *save)
{
	char	*str;
	int		i;
	int		i2;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] && save[i] != '\n')
		i++;
	if (save[i] == '\n')
		i++;
	str = malloc(sizeof(*str) * i + 1);
	if (!str)
		return (NULL);
	i2 = 0;
	while (i2 < i)
	{
		str[i2] = save[i2];
		i2++;
	}
	str[i2] = '\0';
	return (str);
}

char	*ft_save_line(char *save)
{
	char	*str;
	int		i;
	int		i2;

	i = 0;
	while (save[i] && save[i] != '\n')
		i++;
	if (!save[i])
	{
		free(save);
		return (NULL);
	}
	i++;
	str = malloc(sizeof(*str) * (ft_strlen(save) - i + 1));
	if (!str)
		return (NULL);
	i2 = 0;
	while (save[i] != '\0')
		str[i2++] = save[i++];
	str[i2] = '\0';
	free(save);
	return (str);
}
