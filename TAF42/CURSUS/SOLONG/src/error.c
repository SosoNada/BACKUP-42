/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:47:36 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 02:26:46 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	error(t_data_game *game, int num)
{
	write(STDERR_FILENO, "❌ERROR❌ ", 12);
	if (num == 1)
		write(STDERR_FILENO, "► Le fichier na pas la bonne extension\n", 39);
	if (num == 2)
	{
		write(STDERR_FILENO, "► Usage : ./aout [fichier.ber]\n", 32);
		exit(1);
	}
	if (num == 3)
		write(STDERR_FILENO, "► Fichier vide\n", 16);
	if (num == 4)
		write(STDERR_FILENO, "► Map non rectangulaire\n", 25);

	free_data(game);
}
