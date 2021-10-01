/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarodrig < rarodrig@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:34:44 by user42            #+#    #+#             */
/*   Updated: 2021/10/01 16:33:34 by rarodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	init_struct(t_flags *s_flags)
{
	s_flags->minus = 0;
	s_flags->zero = 0;
	s_flags->width = 0;
	s_flags->hashtag = 0;
	s_flags->index = 0;
	s_flags->size = 0;
	s_flags->plus = 0;
	s_flags->space = 0;
	s_flags->num = 0;
}

void	ft_reset_flags(t_flags *s_flags)
{
	s_flags->minus = 0;
	s_flags->zero = 0;
	s_flags->width = 0;
	s_flags->hashtag = 0;
	s_flags->plus = 0;
	s_flags->space = 0;
	s_flags->num = 0;
}
