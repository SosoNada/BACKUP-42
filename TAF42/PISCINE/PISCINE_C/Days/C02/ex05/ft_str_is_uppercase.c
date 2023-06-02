/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:24:16 by socherie          #+#    #+#             */
/*   Updated: 2022/08/18 16:39:43 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int   main(void)
{
        char    str[] = "CLKVHSDLK";
        char    str2[] = "slcrThaFdks";
        char    str3[] = "DSLKGNDDSLFHS";
        char    str4[] = "SKDFGHKSa";

        printf("isupper = %d\nisupper = %d\nisupper = %d\nisupper = %d",\
        ft_str_is_uppercase(str), ft_str_is_uppercase(str2), \
        ft_str_is_uppercase(str3), ft_str_is_uppercase(str4));
}*/
