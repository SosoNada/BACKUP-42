/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:00:14 by socherie          #+#    #+#             */
/*   Updated: 2023/04/08 14:44:47 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int     ft_atoi(const char *nptr)
{
        int     i;
        int     nbr;
        int     minus;

        i = 0;
        nbr = 0;
        minus = 1;
        while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
                i++;
        if (nptr[i] == '+' || nptr[i] == '-')
        {
                if (nptr[i++] == '-')
                        minus = -minus;
        }
        while (nptr[i] >= '0' && nptr[i] <= '9')
                nbr = nbr * 10 + (nptr[i++] - '0');
        return (minus * nbr);
}


static void	send_bit(pid_t pid, char c)
{
	int bit;
	bit = 0;

	while (bit < 8)
	{
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else 
			kill(pid, SIGUSR2); 
		bit++;
		usleep(250);
	}
}
	



static void	erreur(int i)
{
	if (i == 0)
	{
		write(1, "[!] Usage : [./client] <server_pid> <message>\n", 46);
		exit(EXIT_FAILURE);
	}
	else if (i == 1)
	{
		write(1, "[!] PID non valide\n", 19);
		exit(EXIT_FAILURE);
	}
}

static void	handler(int signum)
{
	if (signum == SIGUSR2)
	{
		write(1, "Server : Messsage recu !\n", 24);
	}
}

int	main(int ac, char **av)
{
	pid_t	pid;
	int	i;

	pid = 0;
	i = 0;
	if (ac != 3)
		erreur(0);
	pid = ft_atoi(av[1]);
	if (pid < 1)
		erreur(1);
	while (av[2][i])
		send_bit(pid, av[2][i++]);
	signal(SIGUSR2, handler);
	send_bit(pid, '\0');
	while (1)
		pause();
	return (0);
}
