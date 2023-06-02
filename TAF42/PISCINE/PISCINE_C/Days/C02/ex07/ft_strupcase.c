/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:10:41 by socherie          #+#    #+#             */
/*   Updated: 2022/08/20 12:12:46 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "sofiane";
	char str1[] = "sOfIaNe";
	char str2[] = "Sofiane cherieT";
	printf("isupcase = %s\nisupcase = %s\nisupcase = %s", ft_strupcase(str), \
	ft_strupcase(str1), ft_strupcase(str2));
}*/
