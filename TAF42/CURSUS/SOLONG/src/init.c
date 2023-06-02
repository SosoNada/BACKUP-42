/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:54:27 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 02:07:30 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */	

#include "../include/solong.h"
#include "../minilibx/mlx.h"


/************************************************************************************************
 *												*
 * 				INITIALISATION							*
 *												*
 ************************************************************************************************			
 *												*
 * 	Description :										*			
 *												*
 * 	- [init_img] : initiaalise les deonnes du jeu, en autre					*	
 *												*	
 * 		       - (w, h) hauteur et largeur des image a 50 pixels			*
 *												*	
 * 	- [init_data_and_check] : Demare le pprocessus d'initialisation et de verfication	*
 *												*	
 * 				  - verifie si le fichier contenant la map			*
 * 				  - a la bonne extenssion					*
 * 												*	
 ***********************************************************************************************/


void	init_img(t_data_game *game)
{

}

void	init_check_data(t_data_game *game, char *map)
{
	check_map_ber(map, game);
	read_check_map(game, map);
}
