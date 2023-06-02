/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:16:39 by socherie          #+#    #+#             */
/*   Updated: 2022/08/18 11:44:14 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((!(str[i] >= 'A' && str[i] <= 'Z')) \
		&& (!(str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	str[] = "Monmousseau";
	char	str2[] = "Monmousseau Ivry^,%[#@$";

	printf("Code alphanumerique = %d\n",ft_str_is_alpha(str));
	printf("Code alphanumerique = %d\n",ft_str_is_alpha(str2));
}*/
