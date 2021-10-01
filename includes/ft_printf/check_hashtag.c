/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_hashtag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:34:24 by user42            #+#    #+#             */
/*   Updated: 2021/09/30 22:39:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	check_hashtag(char *str, t_flags *s_flags)
{
	if (str[s_flags->index] == '#')
	{
		s_flags->hashtag = 1;
		s_flags->index++;
	}
}

void	print_hashtag(char *str, t_flags *s_flags)
{
	if (s_flags->hashtag && s_flags->num != 0)
	{
		if (str[s_flags->index] == 'x')
			ft_putstr("0x", 1, s_flags);
		else
			ft_putstr("0X", 1, s_flags);
	}
}
