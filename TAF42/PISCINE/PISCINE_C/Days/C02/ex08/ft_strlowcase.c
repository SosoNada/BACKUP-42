/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:19:59 by socherie          #+#    #+#             */
/*   Updated: 2022/08/20 12:36:39 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "SoFiAnE";
	char str1[] = "SOFIANE";
	char str2[] = "Sofiane cherieT";
	printf("islowcase = %s\nislowcase = %s\nislowcase = %s", ft_strlowcase(str), \
        ft_strlowcase(str1), ft_strlowcase(str2));
}*/
