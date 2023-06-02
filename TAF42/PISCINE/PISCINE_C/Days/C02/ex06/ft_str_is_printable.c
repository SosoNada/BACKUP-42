/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:04:52 by socherie          #+#    #+#             */
/*   Updated: 2022/08/18 17:38:57 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "	";
	char	str2[] = "\n";
	char	str3[] = "printable";
	char	str4[] = "printable or not";
	char	str5[] = "printable	or not";

	printf("isprintable = %d\nispintable = %d\n \
	isprintable = %d\nisprintable = %d\nisprintable \
	= %d", ft_str_is_printable(str), \
	ft_str_is_printable(str2), ft_str_is_printable(str3), \
	ft_str_is_printable(str4), ft_str_is_printable(str5));
}*/
