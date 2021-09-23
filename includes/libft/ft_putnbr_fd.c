/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 16:40:43 by rarodrig          #+#    #+#             */
/*   Updated: 2021/06/05 16:40:43 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n, int fd)
{
	unsigned int	new_n;

	if (n < 0)
	{
		ft_putchar ('-', fd);
		new_n = n * -1;
	}
	else
		new_n = n;
	if (new_n >= 10)
		ft_putnbr (new_n / 10, fd);
	ft_putchar(new_n % 10 + '0', fd);
}
