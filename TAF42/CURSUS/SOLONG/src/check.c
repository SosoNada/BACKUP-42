/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 22:42:59 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 02:11:43 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

/************************************************
 *						*
 * 	fonction utile a check_map_ber();	*
 *						*
 * *********************************************/

char    *ft_strrchr(const char *s, int c)
{
        char    *ptr;

        ptr = NULL;
        while (*s)
        {
                if (*s == (unsigned char)c)
                        ptr = (char *)s;
                s++;
        }
        if (*s == (unsigned char)c)
                return ((char *)s);
        return (ptr);
}

int     ft_strcmp(char *s1, char *s2)
{
        while (*s1 && (*s1 == *s2))
        {
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}


/*******************************************************************************
*									       *
* 			     CHECK EXTENSION .BER			       *
*									       *
********************************************************************************
*									       *
* 	Deroulement :							       *
*									       *
* 	1) Declare une chaine qui acceuillera un pointeur 		       *
* 	   sur la derniere occurence retourner par strrchrr()		       *	
*									       *
*	2) Si strrchr() na pas trouver l'occurence rechercehr (.)	       *
*	   ou si la suite de la derniere occurence rechercher nest pas '.ber'  *
*									       *
*	3) On appelle la fonction error() qui affichera un msg d'erreur	       *
*	   et liberera la memoire de data_game				       *
*									       *	
******************************************************************************/

void	check_map_ber(char *map, t_data_game *game)
{
	char	*str;

	str = ft_strrchr(map, '.');
	if (str == NULL || ft_strcmp(str, ".ber") != 0)
		error(game, 1);
}
