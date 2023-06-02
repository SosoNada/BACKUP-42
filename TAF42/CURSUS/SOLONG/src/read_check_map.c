/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_check_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:30:45 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 16:09:56 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "../include/so_long.h"

void	read_check_map(t_data_game *game, char *map)
{
	int	fd; /* acceuillera le File Descriptor */
	char	*line; /* Acceuillera la ligne lue par GNL */
	int	line_control; /* Control si toute les ligne ont la meme taille */

	fd = open(map, O_RDONLY); /* Attribution du FD associe au fichier ouvert par open() */
	if (fd < 0) /* Si probleme douverture de fichier par open)() */
		free_data(game); /* on libere la memoire et on quite car pas de map a lire */
	line = NULL;
	line_control = 2;

	while (1)
	{
		line = get_next_line(fd);
		if (line == EMPTY_LINE && line_control == 2)
			error(game, 3);
		else if (line == EMPTY_LINE)
		{
			break;
		}
		if (line_control == 2)
			game->width_l = ft_strlen(line);
		line_control = 0;
		if (ft_strlen(line) != game->width_l)
		{
			free(line);
			error(game, 4);
		}
		game->all_line = ft_strjoin(game->all_line, line);
		game->height_l++;
		if (line)
			free(line);
	}
	close (fd);
	
}


int main(int ac, char **av)
{


	t_data_game *game;

	if (ac != 2)
                error(game, 2);

	game = ft_calloc(1, sizeof(t_data_game));

	read_check_map(game, av[1]);
	printf("%s", game->all_line);
	printf("hauteur : %d\n", game->height_l);
	printf("longeur : %d\n", game->width_l);
	printf("all_line : %d\n", ft_strlen(game->all_line));
	free_data(game);
	return 0;
}
