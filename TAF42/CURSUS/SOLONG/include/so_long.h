/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:45:21 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 02:22:02 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define ERROR_FD ((char*)-1) /* Use par GNL et read_check_map */
# define ERROR_VALUE ((char*)-1)
# define EMPTY_LINE NULL

# include <fcntl.h> /* open() */
# include <stdlib.h> /* Malloc */
# include <unistd.h> /* File Descriptor, read(), close() */

/****************************************************************
 *								*
 * 			   Structure 				*
 *								*	
 ****************************************************************
 *								*
 * 	Description :						*
 *								*
 * 	- [mlx] : Instance de connexion au serveur X 		*
 *								*
 * 	- [mlx_win] : Fenetre graphique liee a l'instance mlx 	*
 *								*
 * 	- [all_line] : Ligne entiere de la map			*
 *								*	
 * 	- [width] : longeur d'une ligne dans la carte		*
 *								*
 * 	- [height] : nombre de ligne dans la carte		*
 *								*
 * 	- [mv] : Nombre de mouvement du player			*
 *								*
 ****************************************************************/

typedef struct s_data_game
{
	void	*mlx;
	void	*mlx_win;
	char	*all_line;
	int		width_l;
	int		height_l;
	int		mv;

}	t_data_game;

/************************************************************************
*									*
* 					     FONCTIONS			*
*									*
*************************************************************************
*									*
* 	Description :							*
*									*
*	- [ft_strlen] : Utiliser dans ft_strjoin(), read_check_map()	*
*									*
* 	- [free_data] : Libere la memoire alloue 			*
* 									*
* 				- pour game et game->all_line		*
* 				- quitte le programme			*
* 									*
* 	- [check_map_ber] : Check l'extension de fichier		*
*									*
* 			    - afficher message d'erreur			*
* 			    - free game					*
* 			    - exit en cas d'erreur			*
*									*
* 	- [init_img] : Initialise les parametre d'image			*
* 									*
* 	- [init_check_data] : Demeare le processus d'initialisation	*
* 			      et de verification			*
* 					- check_map_ber()		*
*									*
* 	- [ft_calloc] : Alloue pour t_data_game	et ft_strjoin()		*
*									*
* 	- [error] : Gere les erreurs					*
*									*
* 			- affiche des msg en fonction de l'erreur	*
* 			- exit ou appel free_data()			*
* 			  en fonction de l'erreur			*
*									*
* 	-[read_check_map] : Lis la map et verifie les erreurs		*
* 									*
* 				- creer un file descriptor		*
* 				- utilise GNL				*
* 				- verifie si fichier vide		*	
* 				- verifie si map rectangulaire  	*
*									*
* 	- [ft_strjoin] : Utiliser dans GNL et read_check_map()		*
*									*
* 	- [get_next_line] : Utiliser dans read_check_map()		*
*									*
*									*
************************************************************************/

int		main(int ac, char **av);
int		ft_strlen(const char *s);
int		free_data(t_data_game *game);
void	check_map_ber(char *map, t_data_game *game);
void	init_img(t_data_game *game);
void	init_check_data(t_data_game *game, char *map);
void	*ft_calloc(size_t nmemb, size_t size);
void	error(t_data_game *game, int num);
void	read_check_map(t_data_game *game, char *map);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);

#endif
