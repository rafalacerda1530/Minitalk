/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:34:44 by user42            #+#    #+#             */
/*   Updated: 2021/09/30 22:34:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
