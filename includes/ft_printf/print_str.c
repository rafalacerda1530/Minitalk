/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig < rarodrig@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:35:00 by user42            #+#    #+#             */
/*   Updated: 2021/10/01 16:39:32 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_char(va_list args, t_flags *s_flags)
{
	char	c;
	int		rest_size;

	rest_size = s_flags->width - 1;
	c = va_arg(args, int);
	if (rest_size > 0 && s_flags->minus)
	{
		ft_putchar_fd(c, 1, s_flags);
		print_width(&rest_size, s_flags);
	}
	else
	{
		print_width(&rest_size, s_flags);
		ft_putchar_fd(c, 1, s_flags);
	}
}

void	ft_print_str(va_list args, t_flags *s_flags)
{
	char	*str;
	int		rest_size;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		rest_size = s_flags->width - ft_strlen("(null)");
		print_width(&rest_size, s_flags);
		ft_putstr("(null)", 1, s_flags);
		return ;
	}
	rest_size = s_flags->width - ft_strlen(str);
	if (s_flags->minus && rest_size > 0)
	{
		ft_putstr(str, 1, s_flags);
		print_width(&rest_size, s_flags);
		return ;
	}
	else if (rest_size > 0)
		print_width(&rest_size, s_flags);
	ft_putstr(str, 1, s_flags);
}
