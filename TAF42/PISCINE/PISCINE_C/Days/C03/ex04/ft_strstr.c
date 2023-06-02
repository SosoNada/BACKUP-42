/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 16:07:01 by socherie          #+#    #+#             */
/*   Updated: 2022/08/25 12:16:16 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		find = 0;
		while (to_find[find] == str[i + find])
		{	
			find++;
			if (to_find[find] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

/*int main(int argc, char *argv[])
{
	if (argc > 1)
	{

		if (ft_strstr(argv[1], argv[2]) == argv[1])
		{
			printf("to_find == \0");
		}
		else
			printf("premier caractere trouver dans str : %s", \
			ft_strstr(argv[1], argv[2]));
	
		return (0);
	}
}*/
