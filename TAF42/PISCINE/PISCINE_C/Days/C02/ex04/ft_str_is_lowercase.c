/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:01:25 by socherie          #+#    #+#             */
/*   Updated: 2022/08/18 14:32:36 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "qwfsak";
	char	str2[] = "slchaFdks";
	char	str3[] = "dsfk8jkl";
	char	str4[] = "sakjfafa";

	printf("islower = %d\nislower = %d\nislower = %d\nislower = %d",\
	ft_str_is_lowercase(str), ft_str_is_lowercase(str2), \
	ft_str_is_lowercase(str3), ft_str_is_lowercase(str4));
}*/
