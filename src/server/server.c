/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 19:40:43 by rarodrig          #+#    #+#             */
/*   Updated: 2021/09/23 19:36:14 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minitalk.h"

void handler(int sig)
{
	static unsigned int	count;
	static unsigned int	letter;

	if (count > 7)
	{
		count = 0;
		letter = 0;
	}
	if (sig == SIGUSR2)
	{
		letter += 1 << count;
	}
	count++;
	if (count == 8)
		ft_printf("%c", letter);
}

int main(void)
{
	int pid;
	struct sigaction sa;
	
	
	pid = getpid();
	ft_printf("PID: [%d]", pid);

	sa.sa_handler = &handler;
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);

	while (1)
	{
	}
	return 0;
}
