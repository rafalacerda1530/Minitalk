/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_type.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:35:06 by user42            #+#    #+#             */
/*   Updated: 2021/09/30 22:35:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_parse_args(char *str, t_flags *s_flags, va_list args)
{
	if ((str[s_flags->index] == 'd') || (str[s_flags->index] == 'i'))
		ft_print_num(args, s_flags);
	else if (str[s_flags->index] == 'c')
		ft_print_char(args, s_flags);
	else if (str[s_flags->index] == 's')
		ft_print_str(args, s_flags);
	else if (str[s_flags->index] == 'u')
		ft_print_unsig(args, s_flags);
	else if (str[s_flags->index] == 'p')
		ft_print_pointer(args, s_flags, str);
	else if ((str[s_flags->index] == 'x') || (str[s_flags->index] == 'X'))
		ft_print_hex(str, s_flags, args);
	else if (str[s_flags->index] == '%')
		ft_putchar_fd('%', 1, s_flags);
}
