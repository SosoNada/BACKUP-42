/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 20:45:48 by socherie          #+#    #+#             */
/*   Updated: 2023/06/01 20:47:49 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int     ft_strlen(const char *s)
{
        int     i;

        i = 0;
        while (s[i] != '\0')
                i++;
        return (i);
}
