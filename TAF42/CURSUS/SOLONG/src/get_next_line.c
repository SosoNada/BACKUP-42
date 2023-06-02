/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:04:38 by socherie          #+#    #+#             */
/*   Updated: 2023/06/01 23:34:17 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char	*readbuf(int fd, char *line)
{
	int		r;
	char	*buffer;

	r = 1;
	buffer = malloc(sizeof(char) * (1 + 1));
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
	while (r > 0 && buffer[0] != '\n')
	{
		r = read (fd, buffer, 1);
		if (r == -1)
		{
			free(buffer);
			return (ERROR_VALUE);
		}
		if (r > 0)
		{
			buffer[1] = '\0';
			line = ft_strjoin(line, buffer);
		}
	}
	free(buffer);
	return (line);
}

char	*get_next_line(int fd)
{

	if (fd < 0)
		return (ERROR_FD);

	char	*line;
	char	*line2;
	line2 = NULL;

	line = readbuf (fd, line2);
	return (line);

}
