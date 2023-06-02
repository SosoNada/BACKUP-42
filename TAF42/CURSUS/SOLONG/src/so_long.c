/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:45:31 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 00:03:00 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"
#include "../minilibx/mlx.h"

/*******************************************************************************
*									       *
* 					FICHIER MAIN			       *
*									       *	
********************************************************************************
*									       *
* 	Description :							       *
*									       *
* 	1) Creation de la liste d'element du jeu			       *
*									       *
* 	2) Attribution de memoire dynamique pour la liste		       *
*									       *
* 	3) Initialisation de l'instance connexion au serveur X		       *
*									       *
* 	4) Initialisation et verification des parametres du jeu 	       *
*									       *	
* 	5) utiliser x et y comme taille pour mlx_new_window permet 	       *
* 	   de la definir dynamiquement 					       *	
*          en fonction du contenue ou de parametre calcule  		       *
*									       *	
******************************************************************************/

#include "../include/so_long.h"
#include "../minilibx/mlx.h"

int	main(int ac, char **av)
{
	t_data_game	*game;

	if (ac != 2)
		error(game, 2);

	game = ft_calloc(1, sizeof(t_data_game));
	if (game == NULL)
		return (1);

	game->mlx = mlx_init();
	if (game->mlx == NULL)
	{
		//free (game->mlx);
		return (MLX_ERROR);
	}

	init_check_data(game, av[1]);

	game->mlx_win = mlx_new_window(game->mlx, game->x, game->y, "So_long"); 
	if (game->mlx_win == NULL)
	{
		//free (game->mlx_win);
		return (MLX_ERROR);
	}
	return (0);
}	
