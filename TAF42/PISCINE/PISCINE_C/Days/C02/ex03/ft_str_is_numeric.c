/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:55:12 by socherie          #+#    #+#             */
/*   Updated: 2022/08/18 13:23:36 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	char num[] = "1u45365345474";
	char num2[] = "231231412452";
	printf("Numeric = %d\nNumeric = %d", ft_str_is_numeric(num), \
	ft_str_is_numeric(num2));

	return (0);
}*/
