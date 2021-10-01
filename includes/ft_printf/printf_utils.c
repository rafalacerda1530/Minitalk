/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 22:35:23 by user42            #+#    #+#             */
/*   Updated: 2021/09/30 22:35:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar_fd(char c, int fd, t_flags *s_flags)
{
	write(fd, &c, 1);
	s_flags->size++;
}

void	ft_putstr(char *str, int fd, t_flags *s_flags)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
		s_flags->size++;
	}
}
