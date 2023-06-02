/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:56:49 by socherie          #+#    #+#             */
/*   Updated: 2023/06/01 23:46:17 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	free_data(t_data_game *game)
{
	if (game != NULL)
	{
		if (game->all_line != NULL)
			free(game->all_line);
		free(game);
	}
	exit (1);
}
