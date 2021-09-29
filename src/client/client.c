/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:37:32 by rarodrig          #+#    #+#             */
/*   Updated: 2021/09/23 19:28:05 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minitalk.h"


void msg_handler(int sig)
{
	write(1, "MESSAGE RECEIVED", 16);
	exit(0);
}

int	pid_n(char *nptr)
{
	int	res;
	int	cont;

	res = 0;
	cont = 0;
	while (nptr[cont] >= '0' && nptr[cont] <= '9')
	{
		res = nptr[cont] - '0' + (res * 10);
		cont++;
	}
	return (res);
}

void handler(int pid, unsigned char sig)
{
	int	count;

	count = 0;
	while (count < 8)
	{
		if (sig % 2 == 0 || sig == 0)
		{
			kill(pid, SIGUSR1);
			usleep(500);
		}
		else
		{
			kill(pid, SIGUSR2);
			usleep(500);
		}
		sig /= 2;
		count++;
	}
}


int	main(int argc, char *argv[])
{	
	pid_t	pid;
	if (argc != 3)
	{
		ft_printf("ERRO\n");
		return (0);
	}
	pid = pid_n(argv[1]);
	if (!pid)
		ft_printf("INVALID PID\n");
	ft_printf("%d\n", pid);
	signal(SIGUSR2, msg_handler);
	while (*argv[2])
	{
		handler(pid, *argv[2]);
		argv[2]++;
	}
	handler(pid, '\0');
	return (1);
}
