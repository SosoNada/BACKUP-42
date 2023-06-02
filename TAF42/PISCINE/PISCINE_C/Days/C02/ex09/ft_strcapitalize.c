/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:56:42 by socherie          #+#    #+#             */
/*   Updated: 2022/08/30 20:59:45 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') \
		&& !(str[i -1] >= '0' && str[i -1] <= '9') \
		&& !(str[i -1] >= 'A' && str[i -1] <= 'Z') \
		&& !(str[i -1] >= 'a' && str[i -1] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinQuante+et+un";
	printf("1 ere lettre Mot Maj = %s", ft_strcapitalize(str));

	return (0);
}*/	
