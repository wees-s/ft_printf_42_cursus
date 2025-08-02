NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c	ft_print_utils.c ft_print_hex.c ft_print_address_i.c

OBJS = $(SRCS:.c=.o)

RMAKE = make re

$(NAME): $(OBJS)
	cd ./libft && $(RMAKE)
	@echo "============================="
	@echo "Copying libft.a --> libftprintf.a"
	cp ./libft/libft.a $(NAME)
	@echo "============================="
	@echo "All $(OBJS) --> $@"
	ar rcs $@ $(OBJS)

%.o: %.c
	@echo "============================="
	$(CC) $(CFLAGS) -c $^

clean:
	@echo "============================="
	@echo "Cleaning all $(OBJS)"
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
