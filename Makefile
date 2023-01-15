CC		=	CC
FLAGS	= 	-Wall -Werror -Wextra 
RM		=	rm -rf
PRINTF = ft_printf/libftprintf.a
LIBTFT = libft/libft.a

all:
	cd ft_printf && make
	cd libft && make
	$(CC) $(FLAGS) src/server.c $(PRINTF) $(LIBTFT) -o server
	$(CC) $(FLAGS) src/client.c $(PRINTF) $(LIBTFT) -o client

clean:
		cd ft_printf && make clean
		cd libft && make clean
		$(RM) server
		$(RM) client

fclean: clean
		cd ft_printf && make fclean
		cd libft && make fclean

re: fclean all

bonus: fclean
	cd ft_printf && make
	cd libft && make
	$(CC) $(FLAGS) "bonus src/client_bonus.c" $(PRINTF) $(LIBTFT) -o client
	$(CC) $(FLAGS) "bonus src/server_bonus.c" $(PRINTF) $(LIBTFT) -o server