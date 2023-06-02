/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 01:00:08 by socherie          #+#    #+#             */
/*   Updated: 2022/08/27 01:07:20 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
		--n;
	}
	if (n == 0)
	{
		return (0);
	}
	return (*s1 - *s2);
}

/*int main(int argc, char *argv[])
{
   int ret;
   ret = ft_strncmp(argv[1], argv[2], 0);
   if(ret < 0) 
   {
      printf("str1 is less than str2");
   } 
   else if(ret > 0) 
   {
      printf("str2 is less than str1");
   } 
   else
   {
      printf("str1 is equal str2 or n equal 0");
   }

   return(0);
}*/
