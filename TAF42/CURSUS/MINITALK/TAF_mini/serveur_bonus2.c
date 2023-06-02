/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serveur_bonus2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socherie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 02:09:23 by socherie          #+#    #+#             */
/*   Updated: 2023/04/07 19:59:16 by socherie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	banner(int pid)
{
	ft_printf("\n\t%s  ██████ ▓█████  ██▀███   ██▒   █▓▓█████  ██▀███\
			%s\n", YELLOW, END);
	ft_printf("\t%s▒██    ▒ ▓█   ▀ ▓██ ▒ ██▒▓██░   █▒▓█   ▀ ▓██ ▒ ██▒\
			%s \n", YELLOW, END);
	ft_printf("\t%s░ ▓██▄   ▒███   ▓██ ░▄█ ▒ ▓██  █▒░▒███   ▓██ ░▄█ ▒\
			%s \n", YELLOW, END);
	ft_printf("\t%s  ▒   ██▒▒▓█  ▄ ▒██▀▀█▄    ▒██ █░░▒▓█  ▄ ▒██▀▀█▄\
			%s\n", YELLOW, END);
	ft_printf("\t%s▒██████▒▒░▒████▒░██▓ ▒██▒   ▒▀█░  ░▒████▒░██▓ ▒██▒\
			%s\n", YELLOW, END);
	ft_printf("\t%s▒ ▒▓▒ ▒ ░░░ ▒░ ░░ ▒▓ ░▒▓░   ░ ▐░  ░░ ▒░ ░░ ▒▓ ░▒▓░\
			%s\n", YELLOW, END);
	ft_printf("\t%s░ ░▒  ░ ░ ░ ░  ░  ░▒ ░ ▒░   ░ ░░   ░ ░  ░  ░▒ ░ ▒░\
			%s\n", YELLOW, END);
	ft_printf("\t%s░  ░  ░     ░     ░░   ░      ░░     ░     ░░   ░\
			%s\n", YELLOW, END);
	ft_printf("\t%s      ░     ░  ░   ░           ░     ░  ░   ░\
			%s\n", YELLOW, END);
	ft_printf("\t%s                              ░\
			%s\n", YELLOW, END);
	ft_printf("%s\n\t\tPID: %d%s\t\t%sBy: socherie%s\n", RED, pid, END,
		YELLOW, END);
	ft_printf("\t⊱ ───────────────────────────────────────────── ⊰\
			\n\n");
}

static void	print_msg(char c)
{
	static char buffer[1024];
	static int i;

	buffer[i] = c;
	i++;
	if (c == '\0')
	{	
		write(1, buffer, i);
		//ft_printf("Message : %s\n", buffer);
		i = 0;
	}
}


static void	handler(int signum, siginfo_t *info, void *context)
{
	static char	c;
	static int	i;

	(void)context;
	if (signum == SIGUSR1)
		c |= (1 << i);
	i++;
	if (i == 8)
	{
		print_msg(c);
		if (c == '\0')
		{
			if (info->si_pid < 0 || info->si_pid == getpid())
			{
				write(1, "[!] Erreur lors de l'envoie du signal de fin : ", 47);
				write(1, "PID non valid\n", 14);
				exit(EXIT_FAILURE);
			}
			kill (info->si_pid, SIGUSR2);
		}
		i = 0;
		c = 0;
	}
}

static void	erreur(int i)
{
	if (i == 2)
	{
		write(1, "[!] Erreur d'attribution de comportement\n", 40);
		exit (1);
	}
	else if (i == 0)
	{
		write(1, "[!] Le serveur ne prend pas d'argument\nUsage : ./server", 55);
		exit (1);
	}
	else if (i == 1)
	{
		write(1, "[!] Le PID n'est pas disponible\n", 32);
		exit (1);
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;

	(void)argv;
	if (argc > 1)
		erreur(0);
	if (getpid() < 1)
		erreur(1);
	banner(getpid());
	sa.sa_handler = SIG_IGN;
	sa.sa_flags = SA_SIGINFO | SA_RESTART;
	sa.sa_sigaction = handler;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	if (sigaction(SIGUSR1, &sa, NULL) == -1 \
			|| sigaction(SIGUSR2, &sa, NULL) == -1)
		erreur(2);
	while (1)
		pause();
	return (0);
}
