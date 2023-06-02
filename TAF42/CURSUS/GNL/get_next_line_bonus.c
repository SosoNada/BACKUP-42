/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 20:05:22 by socherie          #+#    #+#             */
/*   Updated: 2023/01/13 17:48:59 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save[fd] = ft_read_line(fd, save[fd]);
	if (!save[fd])
		return (NULL);
	line = ft_get_line(save[fd]);
	save[fd] = ft_save_line(save[fd]);
	return (line);
}

char	*ft_read_line(int fd, char *save)
{
	int		bytes;
	char	*buffer;

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
	int		i;
	int		i2;
	char	*str;

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
	int		i;
	int		i2;
	char	*str;

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
/*
int main()
{
	char	*line;
	int		i;
	int		fd1;
	//int		fd2;
	//int		fd3;

	fd1 = open("TEST/test.txt", O_RDONLY);
	//fd2 = open("TEST/test2.txt", O_RDONLY);
	//fd3 = open("TEST/test3.txt", O_RDONLY);
	
	i = 1;

	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("fd1 = line [%02d]: %s\n", i, line);
		free(line);
		i++;	

		//line = get_next_line(fd2);
		//printf("fd2 =line [%02d]: %s\n", i, line);
		//free(line);
		//i++;
		

		//line = get_next_line(fd3);
		//printf("fd3 = line [%02d]: %s\n", i, line);
		//free(line);
		//i++;


	}
	close(fd1);
	//close(fd2);
	//close(fd3);
	return (0);
}*/
