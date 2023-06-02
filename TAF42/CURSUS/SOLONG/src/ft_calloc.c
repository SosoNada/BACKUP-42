/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:28:36 by socherie          #+#    #+#             */
/*   Updated: 2023/06/02 01:46:12 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void    *ft_memset(void *s, int c, size_t n)
{
        unsigned char    *p;

        p = (unsigned char *)s;
        while (n--)
                p[n] = (unsigned char)c;
        return (s);
}

void    *ft_calloc(size_t nmemb, size_t size)
{
        void                    *p;
        unsigned long   bof;

        p = NULL;
        if (nmemb == 0 || size == 0)
                return (ft_calloc(1, 1));
        bof = nmemb * size;
        if (bof / size != nmemb)
                return (NULL);
        else
                nmemb = bof;
        p = malloc(nmemb);
        if (!p)
                return (p);
        ft_memset(p, 0, nmemb);
        return (p);
}
