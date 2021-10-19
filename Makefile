NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_printf.c ft_putaddress.c ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putstr.c ft_putunbr.c

HEADER = ft_printf.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

debug: CFLAGS += -g3
debug: fclean
debug: all

sanitize: CFLAGS += -fsanitize=address
sanitize: fclean
sanitize: debug

main: debug
main:
	$(CC) $(CFLAGS) -g3 main.c $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all re make

.PHONY: all clean fclean re