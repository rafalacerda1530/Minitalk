# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rarodrig <rarodrig@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/31 22:10:12 by rarodrig          #+#    #+#              #
#    Updated: 2021/05/31 22:10:12 by rarodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES =	ft_strlen.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \

OBJ = $(FILES:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

bonus: all

$(OBJ_BONUS): $(BONUS)
	$(CC) $(CFLAGS) -c $(BONUS)

clean: 
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re