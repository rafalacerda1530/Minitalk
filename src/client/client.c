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

int	pid_n(char *arg)
{
	int	id;

	id = 0;
	while (*arg)
	{
		if (*arg >= '0' && *arg <= '9')
			id = (id * 10) + (*arg - '0');
		else
			return (0);
		arg++;
	}
	return (id);
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
		ft_printf("Please inform PID, and the string wich you want send!\n");
		return (0);
	}
	pid = pid_n(argv[1]);
	ft_printf("%d\n", pid);
	if (!pid)
		ft_printf("Please inform a correct PID!!\n");
	while (*argv[2])
	{
		handler(pid, *argv[2]);
		argv[2]++;
	}
	ft_printf("\n");
	return (1);
}
