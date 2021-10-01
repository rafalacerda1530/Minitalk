PATH_LIBFT = ./includes/libft/
PATH_PRINTF = ./includes/ft_printf/

FILE = ./src/client.c ./src/server.c

CLIENT = client
SERVER = server

LIBFT = libft.a
PRINTF = libftprintf.a

CC = clang
CFLAGS = -Wextra -Werror -Wall
RM = rm -rf

OBJ = ${FILE:.c=.o}

.c.o:
	@${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:  make_libft $(SERVER) $(CLIENT)
	
$(SERVER): $(OBJ)
	@$(CC) $(CFLAGS) ./src/server.o -L $(PATH_LIBFT)libft.a $(PATH_PRINTF)libftprintf.a -o server

$(CLIENT): $(OBJ)
	@$(CC) $(CFLAGS) ./src/client.o -L $(PATH_LIBFT)libft.a $(PATH_PRINTF)libftprintf.a -o client

make_libft:
	@make -C $(PATH_LIBFT)
	@make -C $(PATH_PRINTF)

bonus: all

clean:
	rm -rf ./src/server.o ./src/client.o
	make -C $(PATH_LIBFT) clean
	make -C $(PATH_PRINTF) clean

fclean: clean
	rm -rf $(CLIENT) $(SERVER)
	make -C $(PATH_LIBFT) fclean
	make -C $(PATH_PRINTF) fclean