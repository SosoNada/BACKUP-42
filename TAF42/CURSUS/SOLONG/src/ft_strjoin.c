/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 02:17:10 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 02:17:59 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

char    *ft_strjoin(char *s1, char *s2)
{

        if (!s1)
        {
                s1 = malloc(sizeof(char) * 1);
                s1[0] = '\0';
        }

        char    *str;
        size_t  i;
        size_t  c;

        str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if (!str)
                return (NULL);
        i = -1;
        while (s1[++i])
                str[i] = s1[i];
        c = 0;
        while (s2[c])
        {
                str[i + c] = s2[c];
                c++;
        }
        str[i + c] = '\0';
        free(s1);
        return (str);
}
